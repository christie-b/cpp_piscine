/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:40:22 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 10:59:47 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "/* GRADE INCREMENT */" << std::endl;
	try
	{
		Bureaucrat Perso("Perso", 2);

		std::cout << Perso;
		Perso.inc_grade();
		std::cout << Perso;
		Perso.inc_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "/* GRADE DECREMENT */" << std::endl;
	try
	{
		Bureaucrat Anonymous("Anonymous", 149);

		std::cout << Anonymous;
		Anonymous.dec_grade();
		std::cout << Anonymous;
		Anonymous.dec_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "/* CONSTRUCTOR WITH INVALID CLASSES */" << std::endl;
	try
	{
		Bureaucrat someone("Jean", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat someone("Jacques", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
