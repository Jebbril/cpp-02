/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:19 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 14:55:17 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H

#define POINT_H

#include "Fixed.hpp"

class	Point {
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &object);
		Point	&operator=(const Point &object);
		~Point();
		Fixed	getX() const;
		Fixed	getY() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif