/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:39:11 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/03/23 17:21:21 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <ostream>

class Bureaucrat;

class AForm {
    
    private:
        static const int kHighestGrade = 1;
        static const int kLowestGrade = 150;
		const int _gradeReqToSign;
        const int _gradeReqToExecute;
        const std::string _name;
		
        bool _signed;
        int checkGrade(int grade);

    public:
		AForm();
        AForm(const std::string _name, const int _gradeReqToSign, 
            const int _gradeReqToExecute);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        virtual ~AForm();

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
        class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
        virtual void execute(const Bureaucrat& executor) const = 0;
        void canBeExecuted(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif