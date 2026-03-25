/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:43:27 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/03/25 16:31:27 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    :   AForm("ShrubberyCreationForm", 145, 137),
        _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
	this->_target = obj._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	if (this != &obj) {
		this->_target = obj._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

const char* ShrubberyCreationForm::FileOpenException::what() const throw() {
    return "ShrubberyCreationForm: could not open file";
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    canBeExecuted(executor);
    std::string filename = _target + "_shrubbery";

    std::ofstream outfile(filename.c_str());
    if (!outfile.is_open())
        throw FileOpenException();

    outfile << "       _-_\n";
    outfile << "    /~~   ~~\\\n";
    outfile << " /~~         ~~\\\n";
    outfile << "{               }\n";
    outfile << " \\  _-     -_  /\n";
    outfile << "   ~  \\\\ //  ~\n";
    outfile << "_- -   | | _- _\n";
    outfile << "  _ -  | |   -_\n";
    outfile << "      // \\\\\n";

}