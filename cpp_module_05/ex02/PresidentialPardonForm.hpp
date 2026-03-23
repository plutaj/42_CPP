/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:43:18 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/03/23 17:29:05 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
    
    private:
        std::string _target;
    
    public:
		PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        void execute(const Bureaucrat& executor) const;
		~PresidentialPardonForm();
};

#endif