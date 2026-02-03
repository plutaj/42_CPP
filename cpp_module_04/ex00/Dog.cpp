/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:51 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/03 19:28:14 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog: Default contructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj) {
	std::cout << "Dog: Copy contructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
	if (this != &obj) {
		Animal::operator=(obj);
	}
	std::cout << "Dog: Copy assigment contructor called" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "* Woof Woof 🐶*" << std::endl;
}