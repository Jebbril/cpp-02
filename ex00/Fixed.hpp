/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:56 by orakib            #+#    #+#             */
/*   Updated: 2023/07/30 18:22:08 by orakib           ###   ########.fr       */
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
		int		getRawBits(void);
		void	setRawBits(const int raw);
};

#endif