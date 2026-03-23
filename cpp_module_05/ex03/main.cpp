/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:09 by jpluta            #+#    #+#             */
/*   Updated: 2026/03/23 15:37:51 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {

	Intern randomIntern;
	AForm *test;

	// randomIntern.makeForm("presidential pardon", "testName");
	// randomIntern.makeForm("robotomy request", "testName");
	// randomIntern.makeForm("shrubbery creation", "testName");
	// randomIntern.makeForm("error test", "testName");
	
	test = randomIntern.makeForm("shrubbery creation", "testName");
	std::cout << test->get_name() << std::endl;
	
	delete test;
}
