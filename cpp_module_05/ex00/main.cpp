/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:09 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/07 16:28:31 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat bob("Bob", 151);
		std::cout << bob << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat alice("Alice", 149);
		alice.decrementGrade();
		alice.decrementGrade();
		std::cout << alice << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bob("Bob", 5);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		bob.incrementGrade();
		bob.incrementGrade();
		std::cout << bob << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
