/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:39:08 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/08 18:26:57 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* ========== Constructors & destructor ========== */

AForm::AForm(const std::string name, const int gradeReqToSign, 
            const int gradeReqToExecute) 
    :   _name(name),
        _signed(false),
        _gradeReqToSign(checkGrade(gradeReqToSign)),
        _gradeReqToExecute(checkGrade(gradeReqToExecute))
{}

AForm::AForm(const AForm& obj) 
    :   _name(obj._name),
        _signed(obj._signed),
        _gradeReqToSign(obj._gradeReqToSign),
        _gradeReqToExecute(obj._gradeReqToExecute)
{}

AForm::~AForm() {}

/* ========== Getters & setters ========== */

const std::string AForm::get_name() const{
    return _name;
}

bool AForm::get_signed() const {
    return _signed;
}

int AForm::get_gradeReqToSign() const {
    return _gradeReqToSign;
}

int AForm::get_gradeReqToExecute() const {
    return _gradeReqToExecute;
}

/* ========== Other functions ========== */

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= this->get_gradeReqToSign())
        this->_signed = true;
    else
        throw AForm::GradeTooLowException();
}

int AForm::checkGrade(int grade) {
    if (grade < 1)
        throw AForm::GradeTooHighException();
    if (grade > 150)
        throw AForm::GradeTooLowException();
    return grade;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "AForm \"" << AForm.get_name() << "\""
       << " [signed: " << (AForm.get_signed() ? "yes" : "no")
       << ", grade required to sign: " << AForm.get_gradeReqToSign()
       << ", grade required to execute: " << AForm.get_gradeReqToExecute()
       << "]";
    return os;
}
void AForm::canBeExecuted(const Bureaucrat& executor) const {
    if (!this->get_signed()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > this->get_gradeReqToExecute()) {
        throw GradeTooLowException();
    }
}