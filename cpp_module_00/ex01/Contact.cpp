#include "Contact.hpp"
#include "main.hpp"

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}

void Contact::setFirst_name(const std::string& first_name) {
    this->first_name = first_name;
}

void Contact::setLast_name(const std::string& last_name) {
    this->last_name = last_name;
}

void Contact::setNickname(const std::string& nickname) {
    this->nickname = nickname;
}

void Contact::setPhone_number(const std::string& phone_number) {
    this->phone_number = phone_number;
}

void Contact::setDarkest_secret(const std::string& darkest_secret) {
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirst_name() const {
    return this->first_name;
}

std::string Contact::getLast_name() const {
    return this->last_name;
}

std::string Contact::getNickname() const {
    return this->nickname;
}

std::string Contact::getPhone_number() const {
    return this->phone_number;
}

std::string Contact::getDarkest_secret() const {
    return this->darkest_secret;
}

void Contact::add_contact_data(){
    std::cout << "First name: ";
    setFirst_name(get_input());

    std::cout << "Last name: ";
    setLast_name(get_input());

    std::cout << "Nick name: ";
    setNickname(get_input());

    std::cout << "phone number: ";
    setPhone_number(get_input());

    std::cout << "darkest secret: ";
    setDarkest_secret(get_input());
}