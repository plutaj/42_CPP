/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:47:43 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/11 20:23:49 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void) {

    int N = 6;
    Zombie* horde = zombieHorde(N, "Brian");
    for (int i = 0; i < N; i++) {
        std::cout << i << " ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}