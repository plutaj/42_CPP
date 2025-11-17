#include "main.hpp"

void    first_message()
{
    std::cout << "Please choose one of following: " << std::endl;
    std::cout << "ADD: save a new contact" << std::endl;
    std::cout << "SEARCH: display a specific contact" << std::endl;
    std::cout << "EXIT: close a phonebook" << std::endl;
}

std::string format_column(std::string& str){
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

void    print_list(PhoneBook *phonebook)
{
    int i = 0;

    while (!phonebook->contacts[i].first_name.empty()){
        std::cout << i << "|" << format_column(phonebook->contacts[i].first_name)
            << "|" << format_column(phonebook->contacts[i].last_name) << "|"
            << format_column(phonebook->contacts[i].nickname) << "\n";
        i++;
    }
}

void    print_contact(PhoneBook *phonebook, std::string& input){
    int i;
    if (input.length() > 1 || !valid_input(input)){
       std::cout << "Index can be maximum one digit and must be a number" << "\n";
       return ;
    }
    i = input[0] - '0';
    if (!phonebook->contacts[i].first_name.empty()){
        if (input[0] < '9' && input[0] >= '0')
        {
            std::cout << "First name:     " << phonebook->contacts[i].first_name << "\n";
            std::cout << "Last name:      " << phonebook->contacts[i].last_name << "\n";
            std::cout << "Nickname:       " << phonebook->contacts[i].nickname << "\n";
            std::cout << "Phone number:   " << phonebook->contacts[i].phone_number << "\n";
            std::cout << "Darkest secret: " << phonebook->contacts[i].darkest_secret << "\n";
        }
    }
    else
        std::cout << "Contact on this index does not exist" << "\n";
    return ;
}

bool    valid_input(const std::string input){
    // size_t i = 0;

    if (input.empty())
        return (false);
    // while (i < input.length()){
    //     if (input[i] == ' ')
    //         return (false);
    //     i++;
    // }
    return (true);
}

std::string get_input() {
    std::string input;
    std::getline(std::cin, input);
    return (input);
}
