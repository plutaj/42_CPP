/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:35 by jpluta            #+#    #+#             */
/*   Updated: 2025/12/16 18:03:39 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};
Weapon::~Weapon() {};

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}