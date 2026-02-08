/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:39:08 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/08 18:26:57 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/* ========== Constructors & destructor ========== */

Form::Form(const std::string name, const int gradeReqToSign, 
            const int gradeReqToExecute) 
    :   _name(name),
        _signed(false),
        _gradeReqToSign(checkGrade(gradeReqToSign)),
        _gradeReqToExecute(checkGrade(gradeReqToExecute))
{}

Form::Form(const Form& obj) 
    :   _name(obj._name),
        _signed(obj._signed),
        _gradeReqToSign(obj._gradeReqToSign),
        _gradeReqToExecute(obj._gradeReqToExecute)
{}

Form::~Form() {}

/* ========== Getters & setters ========== */

const std::string Form::get_name() const{
    return _name;
}

bool Form::get_signed() const {
    return _signed;
}

int Form::get_gradeReqToSign() const {
    return _gradeReqToSign;
}

int Form::get_gradeReqToExecute() const {
    return _gradeReqToExecute;
}

/* ========== Other functions ========== */

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= this->get_gradeReqToSign())
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

int Form::checkGrade(int grade) {
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
    return grade;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form \"" << form.get_name() << "\""
       << " [signed: " << (form.get_signed() ? "yes" : "no")
       << ", grade required to sign: " << form.get_gradeReqToSign()
       << ", grade required to execute: " << form.get_gradeReqToExecute()
       << "]";
    return os;
}