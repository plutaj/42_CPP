/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:50:11 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/11 19:55:14 by jozefpluta       ###   ########.fr       */
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