/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 08:15:37 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/11 09:09:14 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 
    private:
        int value;
        static const int _fractionalBits = 8;
    
    public:
        Fixed();
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif