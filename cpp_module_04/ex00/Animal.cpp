/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:34:32 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/03 17:49:48 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default contructor called" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type) {
	std::cout << "Animal: Copy contructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
	std::cout << "Animal: Copy assigment contructor called" << std::endl;
	if (this != &obj) {
		type = obj.type;
	}
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}
