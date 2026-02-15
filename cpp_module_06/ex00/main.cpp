/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:05:59 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/15 08:12:10 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert <literal>\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}

// #include <iostream>
// #include <string>
// #include "ScalarConverter.hpp"

// int main() {
//     std::string testCases[] = {
//         // Char literals
//         "a",
//         "Z",
//         "0",      // numeric char
//         "@",

//         // Int literals
//         "0",
//         "-42",
//         "42",
//         "2147483647",  // INT_MAX
//         "-2147483648", // INT_MIN
//         "9999999999",  // out of int range

//         // Float literals
//         "0.0f",
//         "-4.2f",
//         "4.2f",
//         "3.f",
//         "-0.0f",
//         "nanf",
//         "+inff",
//         "-inff",
//         "123.456f",

//         // Double literals
//         "0.0",
//         "-4.2",
//         "4.2",
//         "3.",
//         "-0.0",
//         "nan",
//         "+inf",
//         "-inf",
//         "123.456"
//     };

//     std::cout << "=== ScalarConverter Test Cases ===" << std::endl;

//     for (size_t i = 0; i < sizeof(testCases)/sizeof(std::string); ++i) {
//         std::cout << "\nInput: " << testCases[i] << std::endl;
//         ScalarConverter::convert(testCases[i]);
//     }

//     return 0;
// }