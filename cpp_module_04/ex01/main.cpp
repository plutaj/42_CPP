/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:55 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/05 18:09:37 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	const int size = 10;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "---- Sounds ----" << std::endl;
	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << "---- Deleting ----" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "---- Deep Copy Test ----" << std::endl;
	Dog original;
	Dog copy = original;

	return 0;
}