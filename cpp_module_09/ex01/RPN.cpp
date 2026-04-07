#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cctype>

/* ### Constructor destructor etc. ### */

RPN::RPN() {}

RPN::RPN(const RPN& obj) {
	_s = obj._s;
}

RPN& RPN::operator=(const RPN& obj) {
	if (this != &obj) {
		_s = obj._s;
	}
	return *this;
}

RPN::~RPN() {}

/* ### Member functions & functions ### */

bool RPN::isNumber(const std::string& token) {
	
	return (token.size() == 1 && std::isdigit(token[0]));
}

bool RPN::isOperator(const std::string& token) {

	return (token == "+" || token == "-" || token == "*" || token == "/");
}

int RPN::evaluate(const std::string& expr) {

	std::istringstream iss(expr);
	std::string token;

	while (iss >> token) {
		if (isNumber(token)) {
			_s.push(token[0] - '0'); // convert char to int
		}
		else if (isOperator(token)) {
			if (_s.size() < 2) {
				std::cerr << "Error" << std::endl;
				exit(1);
			}

			int b = _s.top();
			_s.pop();
			int a = _s.top();
			_s.pop();

			if (token == "+")
				_s.push(a + b);
			else if
				(token == "-") _s.push(a - b);
			else if
				(token == "*") _s.push(a * b);
			else {
				if (b == 0) {
					std::cerr << "Error" << std::endl;
					exit(1);
				}
				_s.push(a / b);
			}
		}
		else {
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}

	if (_s.size() != 1) {
		std::cerr << "Error" << std::endl;
		exit(1);
	}

	return _s.top();
}