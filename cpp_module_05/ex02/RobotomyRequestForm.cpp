/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:43:23 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/03/23 17:37:10 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    :   AForm("RobotomyRequestForm", 72, 45),
        _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
	:	_target(obj._target)
{}

RobotomyRequestForm& operator=(const Bureaucrat& executor) {
	
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    canBeExecuted(executor);
    srand(time(NULL));
    std::cout << "Drrrrrrrr (Drilling noices)." << std::endl;
    if ((rand() % 2) == 1) {
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    } else {
        std::cout << this->_target << " robotomy failed." << std::endl;
    }
}