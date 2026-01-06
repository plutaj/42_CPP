/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:56 by jpluta            #+#    #+#             */
/*   Updated: 2026/01/04 17:50:38 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanB {
	
	public:
		HumanB(std::string name);
		~HumanB();
		
		void setWeapon(Weapon& weapon);
		void attack () const;
		
	private:
		std::string name;
		Weapon* weapon;
		
};