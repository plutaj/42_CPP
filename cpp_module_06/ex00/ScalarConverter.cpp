/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:06:01 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/14 16:47:16 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string.h>
#include <cctype>
#include <climits>
#include <cstdlib>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) {
	(void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
	(void)obj;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

bool isChar(const std::string& literall);
bool isInt(const std::string& literal);
bool isFloat(const std::string& literal);
bool isDouble(const std::string& literal);

void ScalarConverter::convert(std::string literal) {
	
	if (literal.empty()) // maybe is not correct because is nonprintable char
		std::cout << "String is empty." << std::endl;
	else if (isChar(literal))
		return ;
	else if (isInt(literal))
		return ;
	else if (isFloat(literal))
		return ;
	else if (isDouble(literal))
		return ;
	return ;
}

bool isChar(const std::string& literal) {
	
	if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0]))) {
		unsigned char c = literal[0];
		if (std::isprint(static_cast<unsigned char>(c)))
			std::cout << "ScalarConverter OUTPUT: Char " << c << std::endl;
		else
			std::cout << "ScalarConverter OUTPUT: Is nonprintable char." << std::endl;
		return true;
	}
	return false;
}

bool isInt(const std::string& literal) {
	
	size_t i = 0;
	if (literal[0] == '-' || literal[0] == '+' || std::isdigit(literal[0])) {
		if (literal[0] == '-' || literal[0] == '+')
			i++;
		for (size_t x = literal.length(); i < x; i++) {
			if (!std::isdigit(static_cast<unsigned char>(literal[i])))
				return false;
		}
	}
	char* endptr = 0;
	long value = strtol(literal.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return false;
	if (value < INT_MIN || value > INT_MAX)
		return false;
	std::cout << "ScalarConverter OUTPUT: Int " << value << std::endl;
	return true;
}

bool isFloat(const std::string& literal) {
	
	size_t i = 0;
	bool hasDecimal = false;
	bool hasDigit = false;

	if (literal[0] == '+' || literal[0] == '-')
		i++;

	for (size_t x = literal.length(); i < x; i++) {
		char c = literal[i];
		if (std::isdigit(static_cast<unsigned char>(c))) {
			hasDigit = true;
		} else if (c == '.' && !hasDecimal) {
			hasDecimal = true;
		} else if (c == 'f' && i == x - 1) {
			continue;
		} else {
			return false;
		}
	}

	if (!hasDecimal || !hasDigit)
		return false;

	float value = static_cast<float>(atof(literal.c_str()));
	
	std::cout << "ScalarConverter OUTPUT: Float " << value << std::endl;
	return true;
}


bool isDouble(const std::string& literal) {
	
	size_t i = 0;
	bool hasDecimal = false;
	bool hasDigit = false;

	if (literal[0] == '+' || literal[0] == '-')
		i++;

	for (size_t x = literal.length(); i < x; i++) {
		char c = literal[i];
		if (std::isdigit(static_cast<unsigned char>(c))) {
			hasDigit = true;
		}
		else if (c == '.' && !hasDecimal) {
			hasDecimal = true;
		}
		else {
			return false;
		}
	}

	if (!hasDecimal || !hasDigit)
		return false;
		
	double value = atof(literal.c_str());
	
	std::cout << "ScalarConverter OUTPUT: Double " << value << std::endl;
	return true;
}


