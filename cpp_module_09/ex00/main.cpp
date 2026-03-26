#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Input required" << std::endl;
		return 1;
	}

	BitcoinExchange btc("test.csv", argv[1]);

	return 0;
}

// for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it) {
// 		std::cout << it->first << " => " << it->second << std::endl;
// 	}