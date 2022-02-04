/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:40:22 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:35:33 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "\033[34;1m" << "SHRUBBERY FORM: sign 145, exec 137" << "\033[0m" << std::endl;
	ShrubberyCreationForm test1;
	std::cout << std::endl << test1 << std::endl;

	std::cout << "\033[36m" << "****** SHRUBBERY FORM EXECUTION *****" << "\033[0m" << std::endl;
	Bureaucrat	Jean("Jean", 100);
	ShrubberyCreationForm f1("f1");
	Jean.signForm(f1);
	std::cout << std::endl << f1 << std::endl;
	Jean.executeForm(f1);
	std::cout << "*Shrubbery file created !*" <<std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Grade too low sign the form :" <<std::endl;
	Bureaucrat	Jacques("Jacques", 146);
	Jacques.signForm(f1);
	Jacques.executeForm(f1);
	
	std::cout << std::endl << "\033[34;1m" << "ROBOTOMY FORM: sign 72, exec 45" << "\033[0m" << std::endl;
	RobotomyRequestForm test2;
	std::cout << std::endl << test2 << std::endl;
	
	std::cout << "\033[36m" << "****** ROBOTOMY FORM EXECUTION *****" << "\033[0m" << std::endl;
	Bureaucrat	RobotA("RobotA", 5);
	RobotomyRequestForm f2("f2");
	RobotA.signForm(f2);
	std::cout << std::endl << f2 << std::endl;
	RobotA.executeForm(f2);
	RobotA.executeForm(f2);
	RobotA.executeForm(f2);
	RobotA.executeForm(f2);
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Execute a form without signing it :" << std::endl;
	Bureaucrat	RobotB("RobotB", 5);
	RobotomyRequestForm f3("f3");
	RobotB.executeForm(f3);

	std::cout << std:: endl << "\033[34;1m" << "PRESIDENTIAL FORM: sign 25, exec 5" << "\033[0m" << std::endl;
	PresidentialPardonForm test3;
	std::cout << std::endl << test3 << std::endl;

	std::cout << "\033[36m" << "****** PRESIDENTIAL FORM EXECUTION *****" << "\033[0m" << std::endl;
	Bureaucrat	Emma("Emma", 2);
	PresidentialPardonForm f4("f4");
	Emma.signForm(f4);
	std::cout << std::endl << f4 << std::endl;
	Emma.executeForm(f4);
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Grade OK to sign, but too low to execute:" << std::endl;
	Bureaucrat Marie("Marie", 10);
	Marie.signForm(f4);
	Marie.executeForm(f4);

	return (0);

}
