/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:00:16 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/07 18:56:42 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    Harl complain;
    complain.complain(argv[1]);
    return 0;
}