/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/31 20:05:28 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
    
    ScavTrap a("Scavy");

    a.attack("enemy");
    a.guardGate();

    return 0;
}