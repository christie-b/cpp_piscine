/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/09 13:38:14 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(1, 1);
	Point b(1, 10);
	Point c(10, 1);
	Point ptA(5, 5);
	Point ptB(15, 5);
	Point ptC(10, 1); //sur un sommet
	Point ptD(1, 5); //sur une arrete

	if (bsp(a, b, c, ptA))
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is not inside triangle" << std::endl;
	std::cout << "---------------------------------\n";
	if (bsp(a, b, c, ptB))
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is not inside triangle" << std::endl;
	std::cout << "---------------------------------\n";
	if (bsp(a, b, c, ptC))
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is not inside triangle" << std::endl;
	std::cout << "---------------------------------\n";
	if (bsp(a, b, c, ptD))
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is not inside triangle" << std::endl;
	return (0);
}