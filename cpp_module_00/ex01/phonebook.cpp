#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : index(0) {}
void    PhoneBook::add_contact(){
    contacts[index].add_contact_data();
    index = (index + 1) % 8;
}