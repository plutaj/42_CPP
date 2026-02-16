/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:09 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/12 19:50:43 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

void nextLine(void);

int main() {

	Bureaucrat bob("Bob", 1);
	Bureaucrat alice("Alice", 79);
	
	PresidentialPardonForm form1("Adriana");
	ShrubberyCreationForm form2("Netusim");
	RobotomyRequestForm form3("Have no idea");
	
	nextLine();
	bob.signForm(form2);
	// bob.signForm(form3);
	// alice.signForm(form1);
	// try {
	// 	bob.executeForm(form1);
	// }
	// catch (const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// nextLine();

	try {
		bob.executeForm(form2);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	nextLine();
}

void nextLine(void) {
	std::cout << "\n" << std::endl;
}
