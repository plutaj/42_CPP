/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/02 19:31:08 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
    

    std::cout << "------------------------------------------------" << std::endl;
    ScavTrap scavy("Scavy");
    
    std::cout << "My name is                : " << scavy.getName() << std::endl;
    std::cout << "scavys hit points are     : " << scavy.getHitPoints() << std::endl;
    std::cout << "scavys energy points are  : " << scavy.getEnergyPoints() << std::endl;
    std::cout << "scavys attack damage is   : " << scavy.getAttackDamage() << std::endl;

    std::cout << "\n" << std::endl;
    scavy.attack("enemy");
    std::cout << "[energy points left: " << scavy.getEnergyPoints()  << "]" << std::endl;
    
    scavy.takeDamage(10);
    std::cout << "[hit points left: " << scavy.getHitPoints()  << "]" << std::endl;
    scavy.beRepaired(10);
    
    std::cout << "[hit points left: " << scavy.getHitPoints()  << "]" << std::endl;
    std::cout << "[energy points left: " << scavy.getEnergyPoints()  << "]" << std::endl;

    scavy.guardGate();

    return 0;
}