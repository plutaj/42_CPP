/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:09 by jpluta            #+#    #+#             */
/*   Updated: 2026/03/23 15:17:04 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void nextLine(void);

int main() {
	{
		Bureaucrat bob("Bob", 2);
		Bureaucrat alice("Alice", 79);
		
		Form form1("Driving license form", 80, 80);
		Form form2("Permanent residence permit", 3, 3);
		
		std::cout << "\n" << std::endl;

		bob.signForm(form1);
		bob.signForm(form2);
		
		std::cout << "\n" << std::endl;
		
		alice.signForm(form1);
		alice.signForm(form2);
		
		std::cout << "\n" << std::endl;
	}
	{
		try {
			Form form3("Driving license form", 190, 80);
		}
		catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	{
		try {
			Form form4("Driving license form", 89, 800);
		}
		catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	{
		try {
			Form form4("Driving license form", -89, 800);
		}
		catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
}
