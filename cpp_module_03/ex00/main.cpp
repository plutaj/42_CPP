/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/02 19:01:59 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {

    std::cout << "------------------------------------------------" << std::endl;
    ClapTrap clapy("clapy");
    
    std::cout << "My name is                : " << clapy.getName() << std::endl;
    std::cout << "clapys hit points are     : " << clapy.getHitPoints() << std::endl;
    std::cout << "clapys energy points are  : " << clapy.getEnergyPoints() << std::endl;
    std::cout << "clapys attack damage is   : " << clapy.getAttackDamage() << std::endl;

    std::cout << "\n" << std::endl;
    clapy.attack("myself");
    clapy.takeDamage(10);
    clapy.beRepaired(10);
    std::cout << "[energy points letf: " << clapy.getEnergyPoints()  << "]" << std::endl;
    
    return 0;
}