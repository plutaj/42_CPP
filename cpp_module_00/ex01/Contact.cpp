#include "Contact.hpp"
#include "main.hpp"

void Contact::add_contact_data(){
    std::cout << "First name: ";
    first_name = get_input();

    std::cout << "Last name: ";
    last_name = get_input();

    std::cout << "Nick name: ";
    nickname = get_input();

    std::cout << "phone number: ";
    phone_number = get_input();

    std::cout << "darkest secret: ";
    darkest_secret = get_input();
}