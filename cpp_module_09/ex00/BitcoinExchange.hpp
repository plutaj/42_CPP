#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

// struct ParsedLine;

class BitcoinExchange {

	private:
		std::map<std::string, int> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& filename, const std::string& input);
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange();
	
		struct parsedLine {
			std::string date;
			int value;
			parsedLine();
		};

		void ParseLine(const std::string& line, parsedLine& parsed);

};

#endif