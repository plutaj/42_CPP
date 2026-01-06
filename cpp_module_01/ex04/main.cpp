/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:18:08 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/06 18:42:04 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Wrong number of argumens" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty() || filename.empty()) {
        std::cout << "Error: arguments must not be empty" << std::endl;
        return 1;
    }

    // Read entire file into a string
    std::ifstream infile(filename);
    if (!infile) {
        std::cout << "Error: cannot open input file" << std::endl;
        return 1;
    }

    std::ostringstream ss;
    ss << infile.rdbuf();
    std::string content = ss.str();
    infile.close();

    // Replace all occurrences of s1 with s2
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    // Write to output file
    std::ofstream outfile(filename);
    if (!outfile) {
        std::cout << "Error: cannot create output file" << std::endl;
        return 1;
    }
    outfile << content;
    outfile.close();

    return 0;
}