#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const std::string& filename, const std::string& inputname) {

	std::string line;
	parsedLine parsed;

	std::ifstream file(filename); // automatically closed at the end of scope
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database");
	std::ifstream input(inputname);
	if (!input.is_open()) {
		throw std::runtime_error("Error: could not open database");
	}
	
	while (std::getline(file, line)) {
		
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj) {
		this->_data = obj._data;
	}
}

BitcoinExchange::~BitcoinExchange()
{}
BitcoinExchange::parsedLine::parsedLine() : date(""), value(0) {}

void BitcoinExchange::ParseLine(const std::string& line, BitcoinExchange::parsedLine& parsed) {


}
