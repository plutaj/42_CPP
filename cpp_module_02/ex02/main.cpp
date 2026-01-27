/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 08:15:40 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/27 19:13:50 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "=== Values ===" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n=== Comparison operators ===" << std::endl;
    std::cout << "b > c  : " << (b > c) << std::endl;
    std::cout << "b < c  : " << (b < c) << std::endl;
    std::cout << "b >= d : " << (b >= d) << std::endl;
    std::cout << "b <= d : " << (b <= d) << std::endl;
    std::cout << "b == d : " << (b == d) << std::endl;
    std::cout << "b != c : " << (b != c) << std::endl;

    std::cout << "\n=== Arithmetic operators ===" << std::endl;
    std::cout << "b + c = " << (b + c) << std::endl;
    std::cout << "c - b = " << (c - b) << std::endl;
    std::cout << "b * c = " << (b * c) << std::endl;
    std::cout << "c / b = " << (c / b) << std::endl;

    std::cout << "\n=== Increment / Decrement ===" << std::endl;
    std::cout << "a        = " << a << std::endl;
    std::cout << "++a      = " << ++a << std::endl;
    std::cout << "a++      = " << a++ << std::endl;
    std::cout << "a        = " << a << std::endl;
    std::cout << "--a      = " << --a << std::endl;
    std::cout << "a--      = " << a-- << std::endl;
    std::cout << "a        = " << a << std::endl;

    return 0;
}