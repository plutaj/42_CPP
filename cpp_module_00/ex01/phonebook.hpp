#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook{
    private:
    int index;

    public:
        Contact contacts[8];

        PhoneBook();
        void    add_contact();
};

#endif