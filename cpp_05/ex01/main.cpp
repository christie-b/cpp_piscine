/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:40:22 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:01:11 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		std::cout << "*************** JEAN ****************" << std::endl;
		Bureaucrat Jean("Jean", 100);
		std::cout << "CREATE A FORM F1: " << std::endl;
		Form f1("f1", 120, 110);
		std::cout << f1 << std::endl;
		std::cout << "Jean tries to sign the form:" << std::endl;
		Jean.signForm(f1);
		std::cout << std::endl << f1;
		std::cout << "************************************" << std::endl << std::endl;

		std::cout << "************* JACQUES ***************" << std::endl;
		std::cout << "Jacques tries to sign a f1 where the grade is lower than than the required sign grade" << std::endl;
		Bureaucrat Jacques("Jacques", 140);
		Jacques.signForm(f1);
		std::cout << "*************************************" << std::endl;


		std::cout << "Try to create a form whose signing grade is outside of limits (1-150)" << std::endl;
		Form f2("f2", 151, 140);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
