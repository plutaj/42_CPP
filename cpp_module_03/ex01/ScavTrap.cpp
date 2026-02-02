/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:53:53 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/02 19:17:22 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
    if (this != &obj)
        ClapTrap::operator=(obj);

    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0) {
        std::cout << "ScavTrap " << name << " fiercely attacks "
            << target << ", causing " << attackDamage
            << " points of damage!" << std::endl;
		energyPoints--;
    }
    else
		std::cout << "ScavTrap " << name << " has 0 energy points." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name
    	<< " is now in Gate keeper mode." << std::endl;
}