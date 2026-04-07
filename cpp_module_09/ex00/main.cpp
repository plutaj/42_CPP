#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Input required" << std::endl;
		return 1;
	}
	// } else if (std::string(argv[1]) != "input.txt") {
	// 	std::cerr << "Invalid file name." << std::endl;
	// 	return 1;
	// }

	try {
		BitcoinExchange btc("data.csv", argv[1]);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	
	return 0;
}