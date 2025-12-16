/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:53 by jpluta            #+#    #+#             */
/*   Updated: 2025/12/16 18:24:01 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon;

class HumanA {
	
	public:
		HumanA(std::string name);
		~HumanA();
		
		void setWeapon(Weapon& weapon);
		void attack () const;
		
	private:
		std::string name;
		Weapon* weapon;
		
};