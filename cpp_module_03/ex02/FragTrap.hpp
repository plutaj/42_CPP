/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:30:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/31 20:32:46 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();

        void highFivesGuys(void);
};