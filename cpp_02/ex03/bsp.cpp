/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/07 13:38:14 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

Fixed	absFixed(Fixed fixed)
{
	if (fixed < Fixed(0))
		return (Fixed(0) - fixed);
	else
		return (fixed);
}

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed tmp;

	tmp = a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY());
	return Fixed(0.5f) * absFixed(tmp);
}

Fixed	coefDirect(Point const a, Point const b)
{
	return ((b.getY() - a.getY()) / (b.getX() - a.getX()));
}

bool	isOnLine(Point const a, Point const b, Point const point)
{
	return (coefDirect(a, b) == coefDirect(a, point) && coefDirect(a, b) == coefDirect(b, point));
}

bool	bsp(Point const a, Point const b, Point const c, Point const d)
{
	if (a == d || b == d || c == d)
		return false;
	if (isOnLine(a, b, d) || isOnLine(a, c, d) || isOnLine(b, c, d))
		return false;

	Fixed	A = area(a, b, c);
	Fixed	A1 = area(a, b, d);
	Fixed	A2 = area(a, c, d);
	Fixed	A3 = area(b, c, d);
	return (A == A1 + A2 + A3);
}
