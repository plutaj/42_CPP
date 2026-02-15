/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 08:34:41 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/15 08:44:49 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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