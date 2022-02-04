/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:46:43 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 15:57:30 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

char const	*ValueNotFoundException::what() const throw()
{
	return ("NOT FOUND");
}

#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#include <list>
#include "easyfind.hpp"


int	main(void)
{
	std::vector<int>	values;
	for (int i = 0; i < 10; i++)
		values.push_back(i);

	std::cout << YELLOW << "Test array: [ ";
	for (int i = 0; i < 10; i++)
		std::cout << values[i] << ' ';
	std::cout << "]" << RESET;

	std::cout << std::endl << CYAN << "======== STD::VECTOR ========" << std::endl << RESET;
	{
		std::vector<int>	vect(values.begin(), values.end());

		int	val1 = 7;
		int	val2 = 10;
		std::cout << "Looking for " << val1 << " inside vector: ";
		try
		{
			easyfind(vect, val1);
			std::cout << GREEN << "FOUND" << RESET << std::endl;
		}
		catch(ValueNotFoundException &e)
		{
			std::cerr << RED << e.what() << std::endl << RESET;
		}
		std::cout << "Looking for " << val2 << " inside vector: ";
		try
		{
			easyfind(vect, val2);
			std::cout << GREEN << "FOUND" << RESET << std::endl;
		}
		catch(ValueNotFoundException &e)
		{
			std::cerr << RED << e.what() << std::endl << RESET;
		}
	}

	std::cout << std::endl << CYAN << "======== STD::LIST ========" << std::endl << RESET;
	{
		std::list<int>	list(values.begin(), values.end());
		int	val1 = 13;
		int	val2 = 5;
		std::cout << "Looking for " << val1 << " inside list: ";
		try
		{
			easyfind(list, val1);
			std::cout << GREEN << "FOUND" << RESET << std::endl;
		}
		catch(ValueNotFoundException &e)
		{
			std::cerr << RED << e.what() << std::endl << RESET;
		}
		std::cout << "Looking for " << val2 << " inside list: ";
		try
		{
			easyfind(list, val2);
			std::cout << GREEN << "FOUND" << RESET << std::endl;
		}
		catch(ValueNotFoundException &e)
		{
			std::cerr << RED << e.what() << std::endl << RESET;
		}
	}
}