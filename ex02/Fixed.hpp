/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:56 by orakib            #+#    #+#             */
/*   Updated: 2023/07/31 18:44:49 by orakib           ###   ########.fr       */
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
		Fixed	&operator>(const Fixed &object);
		Fixed	&operator<(const Fixed &object);
		Fixed	&operator>=(const Fixed &object);
		Fixed	&operator<=(const Fixed &object);
		Fixed	&operator==(const Fixed &object);
		Fixed	&operator!=(const Fixed &object);
		Fixed	&operator+(const Fixed &object);
		Fixed	&operator-(const Fixed &object);
		Fixed	&operator*(const Fixed &object);
		Fixed	&operator/(const Fixed &object);
		
		// public member functions
		int		getRawBits(void);
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed &object);

#endif