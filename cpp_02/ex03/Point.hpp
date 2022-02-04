/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/10 14:35:29 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		~Point();
		Point(Point const &src); //constructeur par copie
		Point(float const p1, float const p2);
		Point &operator=(Point const &src); //overload d’opérateur d’assignation, permet de copier correctement un obj de meme classe

		bool	operator==(const Point &pt) const;

		Fixed	getX() const;
		Fixed	getY() const;
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif