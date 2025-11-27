#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
	~Contact();

    void setFirst_name(const std::string& first_name);
    void setLast_name(const std::string& last_name);
    void setNickname(const std::string& nickname);
    void setPhone_number(const std::string& phone_number);
    void setDarkest_secret(const std::string& darkest_secret);

    std::string getFirst_name() const;
    std::string getLast_name() const;
    std::string getNickname() const;
    std::string getPhone_number() const;
    std::string getDarkest_secret() const;

    void add_contact_data();
};

#endif