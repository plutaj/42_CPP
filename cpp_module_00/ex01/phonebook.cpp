#include "phonebook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string input;
    int         i;

    first_message();
    while (1)
    {
        std::cin >> input;
        if (input == "ADD")
        {
            
            // i++;
        }
        else if (input == "SEARCH")
        {

        }
        else if (input == "EXIT")
        {
            std::cout << "exiting..." << std::endl;
            return (0);
        }
        input.clear();
        std::cout << "Please choose from ADD, SEARCH, EXIT" << std::endl;
    }
    return (0);
}