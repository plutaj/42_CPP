/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:38:19 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/12 19:45:14 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string name, std::string target) {
    if ("presidential pardon" == name) {
        std::cout << "Intern creates " << name << "." << std::endl;
        return new PresidentialPardonForm(target);
    }
    else if ("robotomy request" == name) {
        std::cout << "Intern creates " << name << "." << std::endl;
        return new RobotomyRequestForm(target);
    }
    else if ("shrubbery creation" == name) {
        std::cout << "Intern creates " << name << "." << std::endl;
        return new ShrubberyCreationForm(target);
    }
    else {
        std::cout << "Error: form \"" << name
                << "\" does not exist." << std::endl;
        return NULL;
    }
}