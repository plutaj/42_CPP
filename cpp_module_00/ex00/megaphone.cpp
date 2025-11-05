#include <iostream>
#include <cstdlib>
#include <string>

std::string rem_quot_and_cap(std::string s);

int main(int argc, char **argv)
{
    std::string str;
    std::string temp;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
        temp += argv[i];
    str = rem_quot_and_cap(temp);
    std::cout << str << std::endl;
    return (0);
}

std::string rem_quot_and_cap(std::string s)
{
    std::string  result;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '"')
            continue ;
        else if (std::islower(s[i]) && std::isalpha(s[i]))
            result.push_back(std::toupper(s[i]));
        else
            result.push_back(s[i]);
    }
    return (result);
}