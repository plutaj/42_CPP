/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:26 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/31 19:42:14 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* === default constructors and destructor === */

ClapTrap::ClapTrap(std::string name)
:   hitPoints(10),
    energyPoints(10),
    attackDamage(0)
{
    this->name = name;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) 
:   name(obj.name),
    hitPoints(obj.hitPoints),
    energyPoints(obj.energyPoints),
    attackDamage(obj.attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
    if (this != &obj) {
        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackDamage = obj.attackDamage;
    }
    std::cout << "Copy assigment constructor called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

/* === getters === */

std::string ClapTrap::getName() {
    return name;
}

unsigned int ClapTrap::getHitPoints() {
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() {
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() {
    return attackDamage;
}

/* === functions === */

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing <damage> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap took damage from <target>, loosing " << amount << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap <name> repaired itself, and gets " << amount << "hit points!" << std::endl;
}