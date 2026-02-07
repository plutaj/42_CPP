/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:34:49 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/05 18:03:14 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat();

		void makeSound(void) const;
};

#endif