/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 08:15:34 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/01/27 18:54:31 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int whole_num) {
	std::cout << "Int constructor called" << std::endl;
	value = whole_num << _fractionalBits;
}

Fixed::Fixed(const float float_num) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(float_num * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& obj) : value(obj.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj) {
	if (this != &obj) {
		value = obj.value;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)value / (1 << _fractionalBits));
}

int Fixed::toInt( void ) const {
	return (value >> _fractionalBits);
}

bool Fixed::operator>(const Fixed& other) const {
	return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.setRawBits(this->value + other.value);
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.setRawBits(this->value - other.value);
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	long tmp = (long)this->value * other.value; 
	result.setRawBits(tmp >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	long tmp = ((long)this->value << _fractionalBits) / other.value;
	result.setRawBits(tmp);
	return result;
}

Fixed& Fixed::operator++() {
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->value += 1;
	return temp;
}

Fixed& Fixed::operator--() {
	this->value -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->value -= 1;
	return temp;
}