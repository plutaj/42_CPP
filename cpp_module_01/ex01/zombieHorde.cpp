/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:50:09 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/11 20:13:06 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    
    if (N <= 0)
        return NULL;
        
    Zombie *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}