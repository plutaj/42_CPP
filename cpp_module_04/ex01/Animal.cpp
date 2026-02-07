/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:34:32 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/04 18:42:07 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Animal: Default contructor called" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type) {
	std::cout << "Animal: Copy contructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Animal: Copy assigment contructor called" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound(void) const {
	std::cout << "* generic animal sound *" << std::endl;
}

