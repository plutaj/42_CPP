/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:34:54 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/03 17:50:01 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		~Animal();
};

#endif