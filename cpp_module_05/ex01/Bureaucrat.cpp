/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:10:03 by jpluta            #+#    #+#             */
/*   Updated: 2026/03/23 17:27:07 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* ========== Constructors & destructors ========== */

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

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

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj) {
		this->grade = obj.grade;
	}
	return *this;
}

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

void Bureaucrat::signForm(Form& form) const {
	try {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.get_name()  << "." << std::endl;
    }
    catch (const Form::GradeTooLowException& e) {
        std::cout << getName() << " couldn’t sign " << form.get_name()
                  << " because " << e.what() << "." << std::endl;
    }
	
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}