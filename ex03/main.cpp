/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:26:41 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 15:10:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main( void ) {
	Point	a(1,1);
	Point	b(3,3);
	Point	c(1,4);
	Point	p(2,2);

	if (bsp(a,b,c,p))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;
	return 0;
}