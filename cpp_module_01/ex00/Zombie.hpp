/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:36:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/11 20:17:38 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
    
    public:
        Zombie();
        Zombie(const std::string& name);
        ~Zombie();

        void    setName(const std::string& newName);
        std::string getName() const;
        void    announce(void);

    private:
        std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif