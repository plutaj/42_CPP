/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:30:51 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/11 19:45:34 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    
    Zombie* zombie0 = new Zombie("Brian");
    randomChump("Foo");
    zombie0->announce();
    delete zombie0;
    return (0);
}