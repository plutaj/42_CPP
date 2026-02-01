/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:32:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/01 16:39:30 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	FragTrap a("Fray");

	a.attack("enemy");
	a.takeDamage(20);
	a.beRepaired(10);
	a.highFivesGuys();

	return 0;
}