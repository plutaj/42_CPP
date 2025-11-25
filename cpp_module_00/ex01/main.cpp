#include "main.hpp"
#include <cstdlib>

int main(){
    PhoneBook   phonebook;
    std::string input;

    std::system("clear");
    first_message();
    while (1){
        input = get_input();
        if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
            print_list(&phonebook);
        else if (input == "EXIT" || std::cin.eof()){
            std::cout << "exiting..." << std::endl;
            return (0);
        }
        else
            std::cout << "Invalid input" << '\n';
        std::cout << "Please choose from ADD, SEARCH, EXIT" << std::endl;
    }
    return (0);
}