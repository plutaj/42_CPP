/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:43:29 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/10 19:42:54 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    
    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm(std::string target);
        void execute(const Bureaucrat& executor) const;
        
        class FileOpenException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif