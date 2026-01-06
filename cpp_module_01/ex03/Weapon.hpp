/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:59 by jpluta            #+#    #+#             */
/*   Updated: 2026/01/04 18:01:28 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
		
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void setType(std::string type);
		const std::string& getType() const;

	private:
		std::string type;
};

#endif