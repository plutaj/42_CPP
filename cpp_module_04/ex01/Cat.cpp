/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:58 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/05 18:08:12 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat: Default contructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj) {
	brain = new Brain(*obj.brain);
	std::cout << "Cat: Copy contructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
	if (this != &obj) {
		Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
	std::cout << "Cat: Copy assigment contructor called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "* meooooow 🐱*" << std::endl;
}