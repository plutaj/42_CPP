#include "main.hpp"

void    first_message() {

    std::cout << "Please choose one of following: " << std::endl;
    std::cout << "ADD: save a new contact" << std::endl;
    std::cout << "SEARCH: display a specific contact" << std::endl;
    std::cout << "EXIT: close a phonebook" << std::endl;
}

std::string format_column(std::string str) {

    std::string temp;

    temp = str;
    if (temp.length() > 10)
    {
        temp = temp.substr(0, 10);
        temp[9] = '.';
    }
    else if (temp.length() < 10)
        temp = std::string (10 - temp.length(), ' ') + temp;
    return (temp);
}

void    print_list(PhoneBook *phonebook) {
    int i = 0;
	std::string input;

	if (!valid_input(phonebook->contacts[i].getFirst_name())) {
		std::cout << "Phone list is empty" << std::endl;
		return ;
	}
    while (!phonebook->contacts[i].getFirst_name().empty()) {
        std::cout << i << "|" << format_column(phonebook->contacts[i].getFirst_name())
            << "|" << format_column(phonebook->contacts[i].getLast_name()) << "|"
            << format_column(phonebook->contacts[i].getNickname()) << "|" << "\n";
		if (i < 7)
			i++;
		else
			break ;
    }
	std::cout << "Please write index of contact to see phone number: " << "\n";
	input = get_input();
	if (input[0] < '8' && input[0] >= '0')
		print_contact(phonebook, input);
	else
		std::cout << "This is not valid index" << std::endl;
}

void    print_contact(PhoneBook *phonebook, std::string& input) {

    int i;

    if (input.length() > 1 || !valid_input(input)) {
       std::cout << "Index can be maximum one digit and must be a number" << "\n";
       return ;
    }
    i = input[0] - '0';
    if (!phonebook->contacts[i].getFirst_name().empty()) {
        if (input[0] < '9' && input[0] >= '0')
        {
            std::cout << "First name:     " << phonebook->contacts[i].getFirst_name() << "\n";
            std::cout << "Last name:      " << phonebook->contacts[i].getLast_name() << "\n";
            std::cout << "Nickname:       " << phonebook->contacts[i].getNickname() << "\n";
            std::cout << "Phone number:   " << phonebook->contacts[i].getPhone_number() << "\n";
            std::cout << "Darkest secret: " << phonebook->contacts[i].getDarkest_secret() << "\n";
        }
    }
    else
        std::cout << "Contact on this index does not exist" << "\n";
    return ;
}

bool    valid_input(const std::string input) {

    if (input.empty() || input[0] == ' ')
        return (false);
    return (true);
}

bool only_spaces(const std::string s) {

    if (s.length() == 0)
        return (false);

    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
            return (false);
    }
    return (true);
}


std::string get_input() {

    std::string input;
    std::getline(std::cin, input);
    return (input);
}
