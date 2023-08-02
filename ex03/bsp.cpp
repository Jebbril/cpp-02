/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:31 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 15:05:50 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c) {
	Fixed	area;

	area = a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY());
	if (area > 0)
		area = area * -1;
	area = area * 1 / 2;
	return (area);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	abcArea;
	Fixed	abpArea;
	Fixed	acpArea;
	Fixed	bcpArea;

	abcArea = getArea(a, b ,c);
	abpArea = getArea(a, b ,point);
	acpArea = getArea(a, c ,point);
	bcpArea = getArea(b, c ,point);
	if (abcArea == (abpArea + acpArea + bcpArea))
		return (true);
	return (false);
}