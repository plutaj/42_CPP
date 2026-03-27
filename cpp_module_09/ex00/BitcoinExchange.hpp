#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange {

	private:
		std::map<std::string, float> _exchangeData;
		std::map<std::string, float> _inputData;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& fileName, const std::string& inputName);
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange();

		bool ParseDatabase(const std::string& line);
		bool ParseInput(const std::string& line);
		void searchQuery();
};

#endif