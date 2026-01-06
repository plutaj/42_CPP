/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:26 by jpluta            #+#    #+#             */
/*   Updated: 2026/01/04 18:13:29 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->name = name;
	this->weapon = &weapon;
};

HumanA::~HumanA() {};

void HumanA::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanA::attack() const {
	if (weapon)
		std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}
