#include "BitcoinExchange.hpp"
#include <sstream>

/* ### Constructor destructor etc. ### */

BitcoinExchange::BitcoinExchange()
{}

// BitcoinExchange::BitcoinExchange(const std::string& filename, const std::string& inputname) {
BitcoinExchange::BitcoinExchange(const std::string& filename) {

	std::string line;

	std::ifstream file(filename.c_str()); // automatically closed at the end of scope
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database");
	// std::ifstream input(inputname);
	// if (!input.is_open()) {
	// 	throw std::runtime_error("Error: could not open database");
	// }
	
	while (std::getline(file, line)) {
		if (!ParseLine(line))
			continue ;
	}
	for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it) {
		std::cout << it->first << " => " << it->second << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj) {
		this->_data = obj._data;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

/* ### Member functions & functions ### */

bool BitcoinExchange::ParseLine(const std::string& line) {

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
	if (ss.fail() || !ss.eof() || !isValidDateFormat(date))
		return false;

	_data[date] = value;
	return true;
}

bool isValidDateFormat(const std::string& line) {

	if (line.length() != 10)
		return false;

	if (line[4] != '-' || line[7] != '-')
		return false;

	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(line[i]))
			return false;
	}
	return true;
}