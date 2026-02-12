/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:03 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/10 19:22:51 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/* ========== Constructors & destructors ========== */

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) 
	:	name(obj.name),
		grade(obj.grade)
{}

Bureaucrat::~Bureaucrat() {}

/* ========== Getters & setters ========== */

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

const std::string& Bureaucrat::getName() const {
	return name;
}

/* ========== Other functions ========== */

void Bureaucrat::incrementGrade() {
	if (grade <= 1)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::decrementGrade() {
	if (grade >= 150)
		throw GradeTooLowException();
	++grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void Bureaucrat::signForm(AForm& form) const {
	try {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.get_name()  << "." << std::endl;
    }
    catch (const AForm::GradeTooLowException& e) {
        std::cout << getName() << " couldn’t sign " << form.get_name()
                  << " because " << e.what() << "." << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}

void Bureaucrat::executeForm(AForm const & form) const {
	form.execute(*this);
	std::cout << this->name << " executed " << form.get_name() << "." << std::endl;
}
