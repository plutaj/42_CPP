/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:58 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/03 19:28:04 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat: Default contructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj) {
	std::cout << "Cat: Copy contructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
	if (this != &obj) {
		Animal::operator=(obj);
	}
	std::cout << "Cat: Copy assigment contructor called" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "* meooooow 🐱*" << std::endl;
}