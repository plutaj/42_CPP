#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    
    private:
        int _id;
        std::string _name;

    public:
        Data(int id, std::string name);
        Data(const Data& obj);
        Data& operator=(const Data& obj);
        ~Data();

        int getId();
        std::string getName();
};

#endif