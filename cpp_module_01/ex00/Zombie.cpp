/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:36:16 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/01 20:23:47 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// constructors & destructor
Zombie::Zombie() : name("") {}
Zombie::Zombie(const std::string& newName) : name(newName) {}
Zombie::~Zombie() {
    std::cout << name << ": " << "died." << std::endl;
}

// setters ***
void Zombie::setName(const std::string& newName) {
    this->name = newName;
}

// getters ***
std::string Zombie::getName() const {
    return (name);
}

// functions ***
void Zombie::announce(void) {

    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    
    Zombie* z = new Zombie(name);
    return (z);
}

void    randomChump(std::string name) {
    Zombie z(name);
    z.announce();
}

