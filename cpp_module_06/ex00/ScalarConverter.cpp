#include "ScalarConverter.hpp"
#include <cstdlib>
#include <climits>
#include <cmath>
#include <cctype>

static bool isPseudoLiteral(const std::string& literal)
{
    return (literal == "nan" || literal == "nanf" ||
            literal == "+inf" || literal == "+inff" ||
            literal == "-inf" || literal == "-inff");
}

static double handlePseudoLiteral(const std::string& literal)
{
    if (literal == "nan" || literal == "nanf")
        return std::numeric_limits<double>::quiet_NaN();
    if (literal == "+inf" || literal == "+inff")
        return std::numeric_limits<double>::infinity();
    if (literal == "-inf" || literal == "-inff")
        return -std::numeric_limits<double>::infinity();
    return 0.0;
}

static bool isCharLiteral(const std::string& literal)
{
    return (literal.length() == 1 && !std::isdigit(literal[0]));
}

static bool isIntLiteral(const std::string& literal)
{
    char* endptr;
    long value = std::strtol(literal.c_str(), &endptr, 10);

    if (*endptr != '\0')
        return false;
    if (value < INT_MIN || value > INT_MAX)
        return false;
    return true;
}

static bool isFloatLiteral(const std::string& literal)
{
    if (literal[literal.length() - 1] != 'f')
        return false;

    char* endptr;
    std::strtof(literal.c_str(), &endptr);

    return (*endptr == 'f' && *(endptr + 1) == '\0');
}

static bool isDoubleLiteral(const std::string& literal)
{
    char* endptr;
    std::strtod(literal.c_str(), &endptr);

    return (*endptr == '\0');
}

static void printChar(double value)
{
    std::cout << "char: ";
    if (std::isnan(value) || value < 0 || value > 127)
        std::cout << "impossible\n";
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(value) << "'\n";
}

static void printInt(double value)
{
    std::cout << "int: ";
    if (std::isnan(value) || value < INT_MIN || value > INT_MAX)
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(value) << "\n";
}

static void printFloat(double value)
{
    std::cout << "float: ";
    float f = static_cast<float>(value);

    if (std::isnan(f))
        std::cout << "nanf\n";
    else if (std::isinf(f))
        std::cout << (f < 0 ? "-inff\n" : "+inff\n");
    else
    {
        std::cout << f;
        if (f == static_cast<int>(f))
            std::cout << ".0";
        std::cout << "f\n";
    }
}

static void printDouble(double value)
{
    std::cout << "double: ";

    if (std::isnan(value))
        std::cout << "nan\n";
    else if (std::isinf(value))
        std::cout << (value < 0 ? "-inf\n" : "+inf\n");
    else
    {
        std::cout << value;
        if (value == static_cast<int>(value))
            std::cout << ".0";
        std::cout << "\n";
    }
}

void ScalarConverter::convert(const std::string& literal)
{
    double value;

    if (isPseudoLiteral(literal))
        value = handlePseudoLiteral(literal);
    else if (isCharLiteral(literal))
        value = static_cast<double>(literal[0]);
    else if (isIntLiteral(literal))
        value = static_cast<double>(std::strtol(literal.c_str(), NULL, 10));
    else if (isFloatLiteral(literal))
        value = static_cast<double>(std::strtof(literal.c_str(), NULL));
    else if (isDoubleLiteral(literal))
        value = std::strtod(literal.c_str(), NULL);
    else
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return ;
    }

    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}


// ScalarConverter::ScalarConverter() {}

// ScalarConverter::ScalarConverter(const ScalarConverter& obj) {
// 	(void)obj;
// }

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
// 	(void)obj;
// 	return *this;
// }

// ScalarConverter::~ScalarConverter() {}

// bool isChar(const std::string& literall);
// bool isInt(const std::string& literal);
// bool isFloat(const std::string& literal);
// bool isDouble(const std::string& literal);

// void ScalarConverter::convert(std::string literal) {
	
// 	if (literal.empty()) // maybe is not correct because is nonprintable char
// 		std::cout << "String is empty." << std::endl;
// 	else if (isChar(literal))
// 		return ;
// 	else if (isInt(literal))
// 		return ;
// 	else if (isFloat(literal))
// 		return ;
// 	else if (isDouble(literal))
// 		return ;
// 	return ;
// }

// bool isChar(const std::string& literal) {
	
// 	if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0]))) {
// 		unsigned char c = literal[0];
// 		if (std::isprint(static_cast<unsigned char>(c)))
// 			std::cout << "ScalarConverter OUTPUT: Char " << c << std::endl;
// 		else
// 			std::cout << "ScalarConverter OUTPUT: Is nonprintable char." << std::endl;
// 		return true;
// 	}
// 	return false;
// }

// bool isInt(const std::string& literal) {
	
// 	size_t i = 0;
// 	if (literal[0] == '-' || literal[0] == '+' || std::isdigit(literal[0])) {
// 		if (literal[0] == '-' || literal[0] == '+')
// 			i++;
// 		for (size_t x = literal.length(); i < x; i++) {
// 			if (!std::isdigit(static_cast<unsigned char>(literal[i])))
// 				return false;
// 		}
// 	}
// 	char* endptr = 0;
// 	long value = strtol(literal.c_str(), &endptr, 10);
// 	if (*endptr != '\0')
// 		return false;
// 	if (value < INT_MIN || value > INT_MAX)
// 		return false;
// 	std::cout << "ScalarConverter OUTPUT: Int " << value << std::endl;
// 	return true;
// }

// bool isFloat(const std::string& literal) {
	
// 	size_t i = 0;
// 	bool hasDecimal = false;
// 	bool hasDigit = false;

// 	if (literal[0] == '+' || literal[0] == '-')
// 		i++;

// 	for (size_t x = literal.length(); i < x; i++) {
// 		char c = literal[i];
// 		if (std::isdigit(static_cast<unsigned char>(c))) {
// 			hasDigit = true;
// 		} else if (c == '.' && !hasDecimal) {
// 			hasDecimal = true;
// 		} else if (c == 'f' && i == x - 1) {
// 			continue;
// 		} else {
// 			return false;
// 		}
// 	}

// 	if (!hasDecimal || !hasDigit)
// 		return false;

// 	float value = static_cast<float>(atof(literal.c_str()));
	
// 	std::cout << "ScalarConverter OUTPUT: Float " << value << std::endl;
// 	return true;
// }


// bool isDouble(const std::string& literal) {
	
// 	size_t i = 0;
// 	bool hasDecimal = false;
// 	bool hasDigit = false;

// 	if (literal[0] == '+' || literal[0] == '-')
// 		i++;

// 	for (size_t x = literal.length(); i < x; i++) {
// 		char c = literal[i];
// 		if (std::isdigit(static_cast<unsigned char>(c))) {
// 			hasDigit = true;
// 		}
// 		else if (c == '.' && !hasDecimal) {
// 			hasDecimal = true;
// 		}
// 		else {
// 			return false;
// 		}
// 	}

// 	if (!hasDecimal || !hasDigit)
// 		return false;
		
// 	double value = atof(literal.c_str());
	
// 	std::cout << "ScalarConverter OUTPUT: Double " << value << std::endl;
// 	return true;
// }


