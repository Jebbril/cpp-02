/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:49 by orakib            #+#    #+#             */
/*   Updated: 2023/07/31 17:45:14 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) {
	this->value = object.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << 8;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = int(value * float(1 << this->frac_bits) + (value >= 0 ? 0.5 : -0.5));
}

Fixed	&Fixed::operator=(const Fixed &object) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &object) {
		this->value = object.value;
	}
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const {
	return (float(this->value) / float(1 << this->frac_bits));
}

int		Fixed::toInt(void) const {
	return (this->value >> 8);
}

std::ostream & operator << (std::ostream &out, const Fixed &object) {
	out << object.toFloat();
	return (out);
}