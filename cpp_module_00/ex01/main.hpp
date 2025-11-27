#ifndef MAIN_HPP
#define MAIN_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstring>

void            first_message();
std::string     format_column(std::string str);
void            print_list(PhoneBook *phonebook);
void            print_contact(PhoneBook *phonebook, std::string& input);
bool            valid_input(const std::string input);
std::string     get_input();
bool			only_spaces(std::string s);

#endif