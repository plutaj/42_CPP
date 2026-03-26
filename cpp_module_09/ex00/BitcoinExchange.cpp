#include "BitcoinExchange.hpp"
#include "BitcoinExchange.h"
#include <sstream>

/* ### Constructor destructor etc. ### */

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const std::string& fileName, const std::string& inputName) {

	std::string line;

	std::ifstream file(fileName.c_str()); // automatically closed at the end of scope
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database");
	std::ifstream input(inputName);
	if (!input.is_open()) {
		throw std::runtime_error("Error: could not open inputfile");
	}
	
	while (std::getline(file, line)) {
		if (!ParseDatabase(line))
			continue ;
	}
	while (std::getline(input, line)) {
		if (!ParseInput(line))
			continue ;
	}

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
	if (ss.fail() || !ss.eof() || !isValidDateFormat(date))
		return false;

	_exchangeData[date] = value;
	return true;
}

bool BitcoinExchange::ParseInput(const std::string& line) {

	std::string date;
	std::string strValue;
	float value;
	size_t pipe;

	pipe = line.find('|');
	if (pipe == std::string::npos) // npos is size_t max value (means no comma found)
		return false ;

	date = line.substr(0, pipe);
	strValue = line.substr(pipe + 1);	

	std::stringstream ss(strValue);
	ss >> value;
	if (ss.fail() || !ss.eof() || !isValidDateFormat(date))
		return false;

	_inputData[date] = value;
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
	if (!isDateValid(line))
		return false;
	return true;
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