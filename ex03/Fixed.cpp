/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:49 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 16:34:14 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

// consturctors and destructors

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const Fixed &object) {
	this->value = object.value;
}

Fixed::Fixed(const int value) {
	this->value = value << 8;
}

Fixed::Fixed(const float value) {
	this->value = int(value * float(1 << this->frac_bits) + (value >= 0 ? 0.5 : -0.5));
}

Fixed::~Fixed() {
}

// operators

Fixed	&Fixed::operator=(const Fixed &object) {
	if (this != &object) {
		this->value = object.value;
	}
	return (*this);
}

bool	Fixed::operator>(const Fixed &object) {
	if (this->value > object.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &object) {
	if (this->value < object.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &object) {
	if (this->value >= object.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &object) {
	if (this->value <= object.value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &object) {
	if (this->value == object.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &object) {
	if (this->value != object.value)
		return (true);
	return (false);
}

Fixed	&Fixed::operator+(const Fixed &object) {
	Fixed *result = new Fixed();

	result->value = this->value + object.value;
	return (*result);
}

Fixed	&Fixed::operator-(const Fixed &object) {
	Fixed *result = new Fixed();

	result->value = this->value - object.value;
	return (*result);
}

Fixed	&Fixed::operator*(const Fixed &object) {
	Fixed *result = new Fixed();

	result->value = (this->value * object.value) >> 8;
	return (*result);
}

Fixed	&Fixed::operator/(const Fixed &object) {
	Fixed *result = new Fixed();

	if (object.value != 0)
		result->value = (this->value << 8) / object.value;
	return (*result);
}

// min max functions

Fixed	&Fixed::min(Fixed &object1, Fixed &object2) {
	if (object1.value < object2.value)
		return (object1);
	return (object2);
}

const Fixed	&Fixed::min(const Fixed &object1, const Fixed &object2) {
	if (object1.value < object2.value)
		return (object1);
	return (object2);
}

Fixed	&Fixed::max(Fixed &object1, Fixed &object2) {
	if (object1.value > object2.value)
		return (object1);
	return (object2);
}

const Fixed	&Fixed::max(const Fixed &object1, const Fixed &object2) {
	if (object1.value > object2.value)
		return (object1);
	return (object2);
}

// increment and decrement functions

Fixed	&Fixed::operator++() {
	(this->value)++;
	return (*this);
}

Fixed	&Fixed::operator--() {
	(this->value)--;
	return (*this);
}

Fixed	&Fixed::operator++(int) {
	Fixed	*temp = new Fixed(*this);
	++(this->value);
	return (*temp);
}

Fixed	&Fixed::operator--(int) {
	Fixed	*temp = new Fixed(*this);
	--(this->value);
	return (*temp);
}

// public member functions

int	Fixed::getRawBits(void) const {
	return (this->value);
}

void	Fixed::setRawBits(const int raw) {
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