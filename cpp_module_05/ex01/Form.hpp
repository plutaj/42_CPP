/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:39:11 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/08 18:26:23 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <ostream>

class Bureaucrat;

class Form {
    
    private:
        static const int kHighestGrade = 1;
        static const int kLowestGrade = 150;
    
        const std::string _name;
        bool _signed;
        const int _gradeReqToSign;
        const int _gradeReqToExecute;
        int checkGrade(int grade);

    public:
        Form(const std::string _name, const int _gradeReqToSign, 
            const int _gradeReqToExecute);
        Form(const Form& obj);
        ~Form();

        const std::string get_name() const;
        bool get_signed() const;
        int get_gradeReqToSign() const;
        int get_gradeReqToExecute() const;
        
        void beSigned(const Bureaucrat& bureaucrat);
        class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif