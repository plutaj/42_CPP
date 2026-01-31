/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/31 19:40:50 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {
    
    ClapTrap didi("didi");
    
    std::cout << "didis name is             : " << didi.getName() << std::endl;
    std::cout << "didis hit points are      : " << didi.getHitPoints() << std::endl;
    std::cout << "didis energy points are   : " << didi.getEnergyPoints() << std::endl;
    std::cout << "didis attack damage is    : " << didi.getAttackDamage() << std::endl;

    didi.attack("myself");
    didi.takeDamage(1);
    didi.beRepaired(1);
    
    return 0;
}