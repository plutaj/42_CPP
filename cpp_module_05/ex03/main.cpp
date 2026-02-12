/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:09 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/12 19:48:20 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

void nextLine(void);

int main() {

	Intern randomIntern;
	// AForm *test;

	randomIntern.makeForm("presidential pardon", "testName");
	// randomIntern.makeForm("robotomy request", "testName");
	// randomIntern.makeForm("shruberry creation", "testName");
	// randomIntern.makeForm("error test", "testName");
	
	// test = randomIntern.makeForm("shruberry creation", "testName");
	
}

void nextLine(void) {
	std::cout << "\n" << std::endl;
}
