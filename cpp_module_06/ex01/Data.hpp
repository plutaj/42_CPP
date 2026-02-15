/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 08:34:44 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/15 08:55:44 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    
    private:
        int _id;
        std::string _name;

    public:
        Data(int id, std::string name);
        Data(const Data& obj);
        Data& operator=(const Data& obj);
        ~Data();

        int getId();
        std::string getName();
};

#endif