#include "BitcoinExchange.hpp"
#include <sstream>
#include <cstdlib>
#include <stdexcept>

/* ### Constructor destructor etc. ### */

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const std::string& fileName, const std::string& inputName) {

    std::string line;

	std::ifstream file(fileName.c_str()); // automatically closed at the end of scope
	if (!file.is_open())
		throw std::runtime_error("could not open database.");
	std::ifstream input(inputName.c_str());
	if (!input.is_open()) {
		throw std::runtime_error("could not open inputfile.");
	}
	
	while (std::getline(file, line)) {
		if (!ParseDatabase(line))
			continue ;
	}

    std::getline(input, line);
    if (line != "date | value") {
        throw std::runtime_error("missing header line of input file.");
    }

    while (std::getline(input, line)) {
        if (!ParseInput(line))
            continue ;
    }

    // searchQuery();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj) {
		this->_exchangeData = obj._exchangeData;
		this->_inputData = obj._inputData;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

/* ### Member functions & functions ### */

std::pair<std::string, float> p;

void BitcoinExchange::searchQuery(std::pair<std::string, float> p) {

    std::map<std::string, float>::iterator it;
    // std::map<std::string, float>::iterator pos;

    // pos = _inputData.begin();

    // while (pos != _inputData.end()) {

        it = _exchangeData.upper_bound(p.first);
        if (it == _exchangeData.begin()) {
            std::cout << "No smaller or equal date\n";
        } else {
            --it;
            std::cout << it->first << " => " << p.second << " = " << it->second * p.second << "\n";
        }
        // pos++;
    // }
}

void isValidValue(float value) {
    if (value < 0)
        throw std::runtime_error("not a positive number.");
    if (value > 1000)
        throw std::runtime_error("too large number.");
}

bool isDateValid(const std::string& line) {

	int year;
	int month;
	int day;
	int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	year = std::atoi(line.substr(0,4).c_str());
	month = std::atoi(line.substr(5,2).c_str());
	day = std::atoi(line.substr(8,2).c_str());

	if (month < 1 || month > 12)
		return false;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		daysInMonth[1] = 29; // leap year
	}

	if (day < 1 || day > daysInMonth[month - 1])
		return false;
	return true;
}

void isValidDateFormat(const std::string& line) {

	if (line.length() != 10)
        throw std::runtime_error("invalid date format.");

	if (line[4] != '-' || line[7] != '-')
        throw std::runtime_error("invalid date format.");

	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(line[i]))
            throw std::runtime_error("invalid date.");
	}
	if (!isDateValid(line))
        throw std::runtime_error("this date doesnt exist.");
}

bool BitcoinExchange::ParseDatabase(const std::string& line) {

	std::string date;
	std::string strValue;
	float value;
	size_t commaPos;

	commaPos = line.find(',');
	if (commaPos == std::string::npos) // npos is size_t max value (means no comma found)
		return false ;

	date = line.substr(0, commaPos);
	strValue = line.substr(commaPos + 1);	

	std::stringstream ss(strValue);
	ss >> value;
	if (ss.fail() || !ss.eof()) {
        std::cout << "Error: invalid value." << std::endl;
		return false;
    }

    try {
        isValidDateFormat(date);
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return false;
    }

	_exchangeData[date] = value;
	return true;
}

std::pair<std::string, float> pp;

// bool BitcoinExchange::ParseInput(const std::string& line) {

// 	std::string date;
// 	std::string strValue;
// 	float value;
// 	size_t pipe;

// 	pipe = line.find('|');
// 	if (pipe == std::string::npos) { // npos is size_t max value (means no comma found)
//         std::cout << "Error: bad input => " << line << std::endl;
// 		return false ;
//     }

// 	std::stringstream ss_left(line.substr(0, pipe - 1));
// 	ss_left >> std::ws; // skips spaces and tabs
// 	std::getline(ss_left, date);

// 	std::stringstream ss_right(line.substr(pipe + 2));
// 	ss_right >> std::ws; // skips spaces and tabs
// 	std::getline(ss_right, strValue);

// 	// strValue = line.substr(pipe + 2);	

// 	// std::stringstream ss(strValue);
// 	if (ss_right.fail() || !ss_right.eof()) {
// 		std::cout << "Error: invalid value." << std::endl;
// 		return false;
//     }
// 	ss_right >> value;

//     try {
//         isValidValue(value);
//         isValidDateFormat(date);
//     } catch (const std::runtime_error& e) {
//         std::cout << "Error: " << e.what() << std::endl;
//         return false;
//     }

// 	pp.first = date;
// 	pp.second = value;
// 	searchQuery(pp);
// 	return true;
// }

bool BitcoinExchange::ParseInput(const std::string& line) {

	std::string date;
	std::string strValue;
	float value;
	size_t pipe;

	pipe = line.find('|');
	if (pipe == std::string::npos) { // npos is size_t max value (means no comma found)
        std::cout << "Error: bad input => " << line << std::endl;
		return false ;
    }

	date = line.substr(0, pipe - 1);
	strValue = line.substr(pipe + 2);	

	

	std::stringstream ss(strValue);
	ss >> value;
	if (ss.fail() || !ss.eof()) {
        std::cout << "Error: invalid value." << std::endl;
		return false;
    }

    try {
        isValidValue(value);
        isValidDateFormat(date);
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return false;
    }

	pp.first = date;
	pp.second = value;
	searchQuery(pp);
	return true;
}
