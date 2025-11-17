#include "main.hpp"

int main(){
    PhoneBook   phonebook;
    std::string input;

    std::system("clear");
    first_message();
    while (1){
        input = get_input();
        if (!valid_input(input))
            std::cout << "Name can not contain spaces and cannot be empty" << "\n";
        else if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH"){
            print_list(&phonebook);
            std::cout << "Please write index of contact to see phone number: " << "\n";
            // input.clear();
            input = get_input();
            print_contact(&phonebook, input);
        }
        else if (input == "EXIT"){
            std::cout << "exiting..." << std::endl;
            return (0);
        }
        else
            std::cout << "Invalid input" << '\n';
        std::cout << "Please choose from ADD, SEARCH, EXIT" << std::endl;
    }
    return (0);
}