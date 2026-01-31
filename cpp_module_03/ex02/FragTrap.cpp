/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:30:19 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/31 20:43:46 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
    if (this != &obj)
        ClapTrap::operator=(obj);

    std::cout << "FragTrap copy assigment constructor called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void highFivesGuys(void) {
    
}
