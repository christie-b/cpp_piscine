/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/10 14:31:45 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::~Point(void)
{}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{}

Point::Point(float const x, float const y) : _x(x), _y(y)
{}

Point	&Point::operator=(const Point &src)
{
	//check for self assignment
	if (this == &src)
	{
		return (*this);
	}
	return (*this);
}

bool	Point::operator==(const Point &pt) const
{
	return (_x == pt._x && _y == pt._y);
}

Fixed	Point::getX() const {
	return (_x);
}

Fixed	Point::getY() const {
	return (_y);
}
