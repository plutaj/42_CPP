#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Input required" << std::endl;
	}

	BitcoinExchange btc("data.csv", argv[1]);
}