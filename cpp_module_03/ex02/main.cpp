/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/02 19:30:38 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {


	std::cout << "------------------------------------------------" << std::endl;
	FragTrap fragy("Fragy");
    
    std::cout << "My name is                : " << fragy.getName() << std::endl;
    std::cout << "fragys hit points are     : " << fragy.getHitPoints() << std::endl;
    std::cout << "fragys energy points are  : " << fragy.getEnergyPoints() << std::endl;
    std::cout << "fragys attack damage is   : " << fragy.getAttackDamage() << std::endl;

    std::cout << "\n" << std::endl;
    fragy.attack("enemy");
    std::cout << "[energy points left: " << fragy.getEnergyPoints()  << "]" << std::endl;
    
    fragy.takeDamage(10);
    std::cout << "[hit points left: " << fragy.getHitPoints()  << "]" << std::endl;
    fragy.beRepaired(10);
    
    std::cout << "[hit points left: " << fragy.getHitPoints()  << "]" << std::endl;
    std::cout << "[energy points left: " << fragy.getEnergyPoints()  << "]" << std::endl;

	fragy.highFivesGuys();

	return 0;
}