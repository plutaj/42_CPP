/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:59 by jpluta            #+#    #+#             */
/*   Updated: 2025/12/16 18:03:53 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
		
	public:
		Weapon();
		~Weapon();

		void setType(std::string type);
		const std::string& getType() const {};

	private:
		std::string type;
};

#endif