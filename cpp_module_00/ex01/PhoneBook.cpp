#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "main.hpp"

PhoneBook::PhoneBook() : index(0) {}
PhoneBook::~PhoneBook(){}

void    PhoneBook::add_contact(){
	Contact temp;

	temp.add_contact_data();
	if (!is_contact_empty(temp))
	{
		contacts[index] = temp;
    	index = (index + 1) % 8;
	}
	else
		std::cout << "Input cannot be empty spaces" << std::endl;
}

int	is_contact_empty(Contact contact) {
	if (only_spaces(contact.getFirst_name()))
		return (1);
	else if (only_spaces(contact.getLast_name()))
		return (1);
	else if (only_spaces(contact.getNickname()))
		return (1);
	else if (only_spaces(contact.getPhone_number()))
		return (1);
	else if (only_spaces(contact.getDarkest_secret()))
		return (1);
	else
		return (0);
}