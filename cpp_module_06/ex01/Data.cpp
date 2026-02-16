#include "Data.hpp"

Data::Data(int id, std::string name) : _id(id), _name(name) {}

Data::Data(const Data& obj) 
    :   _id(obj._id),
        _name(obj._name)
{}

Data& Data::operator=(const Data& obj) {
    if (this != &obj) {
        this->_id = obj._id;
        this->_name = obj._name;
    }
    return *this;
}

Data::~Data() {}

int Data::getId() {
    return _id;
}
std::string Data::getName() {
    return _name;
}