/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:12 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 14:55:22 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
	
}

Point::Point(const float a, const float b) : x(a), y(b) {
	
}

Point::Point(const Point &object) {
	this->x = object.x;
	this->y = object.y;
}

Point	&Point::operator=(const Point &object) {
	if (this != &object) {
		this->x = object.x;
		this->y = object.y;
	}
	return (*this);
}

Point::~Point() {
	x.~Fixed();
	y.~Fixed();
}

Fixed	Point::getX() const {
	return (this->x);
}

Fixed	Point::getY() const {
	return (this->y);
}