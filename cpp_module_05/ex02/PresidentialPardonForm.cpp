/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:43:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/03/25 16:37:39 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:	_target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    :   AForm("PresidentialPardonForm", 25, 5),
        _target(target)
{}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    canBeExecuted(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	:	_target(obj._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	if (this != &obj) {
		this->_target = obj._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}