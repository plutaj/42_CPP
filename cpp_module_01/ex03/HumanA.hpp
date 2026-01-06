/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:53 by jpluta            #+#    #+#             */
/*   Updated: 2026/01/04 18:13:41 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA {
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		
		void setWeapon(Weapon& weapon);
		void attack () const;
		
	private:
		std::string name;
		Weapon* weapon;
		
};