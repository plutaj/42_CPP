/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:37:24 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/04 18:39:22 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "WrongAnimal: Default contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type) {
	std::cout << "WrongAnimal: Copy contructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "WrongAnimal: Copy assigment contructor called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* generic WrongAnimal sound *" << std::endl;
}