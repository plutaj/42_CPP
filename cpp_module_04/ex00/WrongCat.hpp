/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:37:31 by jpluta            #+#    #+#             */
/*   Updated: 2026/02/04 18:38:21 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(const WrongCat& obj);
		~WrongCat();

		void makeSound(void) const;
};

#endif