/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:37:29 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/04 18:37:46 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat: Default contructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj) {
	std::cout << "WrongCat: Copy contructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
	if (this != &obj) {
		WrongAnimal::operator=(obj);
	}
	std::cout << "WrongCat: Copy assigment contructor called" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "* meooo... bark ? xD (WrongCat)*" << std::endl;
}