/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:56 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 16:34:14 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

#define FIXED_H

#include <iostream>
#include <string>

class	Fixed {
	private:
		int					value;
		static const int	frac_bits;
	public:
		// consturctors and destructors
		
		Fixed();
		Fixed(const Fixed &object);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		// operators

		Fixed	&operator=(const Fixed &object);
		bool	operator>(const Fixed &object);
		bool	operator<(const Fixed &object);
		bool	operator>=(const Fixed &object);
		bool	operator<=(const Fixed &object);
		bool	operator==(const Fixed &object);
		bool	operator!=(const Fixed &object);
		Fixed	&operator+(const Fixed &object);
		Fixed	&operator-(const Fixed &object);
		Fixed	&operator*(const Fixed &object);
		Fixed	&operator/(const Fixed &object);
		
		// min max static functions
		
		static Fixed	&min(Fixed &object1, Fixed &object2);
		static const Fixed	&min(const Fixed &object1, const Fixed &object2);
		static Fixed	&max(Fixed &object1, Fixed &object2);
		static const Fixed	&max(const Fixed &object1, const Fixed &object2);
		
		// increment and decrement functions
		
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	&operator++(int);
		Fixed	&operator--(int);

		// public member functions
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed &object);

#endif