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
		Fixed();
		Fixed(const Fixed &object);
		Fixed	&operator=(const Fixed &object);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif