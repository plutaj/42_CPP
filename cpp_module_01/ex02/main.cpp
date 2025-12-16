/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:15:38 by jpluta            #+#    #+#             */
/*   Updated: 2025/12/16 17:34:29 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	
	std::string string = "HI THIS IS BRAIN";
	std::string* string_ptr = &string;
	std::string& string_ref = string; 
	
	std::cout << "memory address of the string		:" << &string << std::endl;
	std::cout << "memory address held by stringPTR	:" << &string_ptr << std::endl;
	std::cout << "memory address held by stringREF	:" << &string_ref << std::endl;
	
	std::cout << "value of the string variable		:" << string << std::endl;
	std::cout << "value pointed to by stringPTR		:" << string_ptr << std::endl;
	std::cout << "value pointed to by stringREF		:" << string_ref << std::endl;

	return 0;
}