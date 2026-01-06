/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:35 by jpluta            #+#    #+#             */
/*   Updated: 2026/01/04 18:01:08 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};
Weapon::Weapon(std::string type) {
	this->type = type;
}
Weapon::~Weapon() {};

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}