/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:53 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/05 18:03:01 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	
	private:
    	Brain* brain;
	
	public:
		Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog();

		void makeSound(void) const;
};

#endif