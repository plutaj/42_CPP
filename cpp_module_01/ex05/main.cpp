/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:00:16 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/07 18:36:57 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    
    Harl complain;
    complain.complain("DEBUG");
    complain.complain("INFO");
    complain.complain("WARNING");
    complain.complain("ERROR");
    return 0;
}