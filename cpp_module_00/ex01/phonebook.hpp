#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class PhoneBook
{
    public:
        Contact contacts[8];
        Contact& get_contact(int index)
        {
            return contacts[index];
        }
};

class Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string phone_number;
        std::string darkest_secret;

        void add_contact()
        {
            std::cout << "First name: ";
            std::cin >> first_name;
            std::cout << "Last name: ";
            std::cin >> last_name;
            std::cout << "phone number: ";
            std::cin >> phone_number;
            std::cout << "darkest secret: ";
            std::cin >> darkest_secret;
        }
};

void    first_message();

#endif