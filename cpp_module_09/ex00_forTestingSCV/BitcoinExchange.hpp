#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

// struct ParsedLine;

class BitcoinExchange {

	private:
		std::map<std::string, float> _data;

	public:
		BitcoinExchange();
		// BitcoinExchange(const std::string& filename, const std::string& input);
		BitcoinExchange(const std::string& filename);
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange();

		bool ParseLine(const std::string& line);

};

bool isValidDateFormat(const std::string& line);

#endif