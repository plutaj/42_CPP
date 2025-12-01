/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:36:21 by jozefpluta        #+#    #+#             */
/*   Updated: 2025/12/01 20:20:32 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> // Correct library for std::string

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