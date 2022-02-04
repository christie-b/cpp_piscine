/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:40:22 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:41:27 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	
	Intern	someRandomIntern;
	Form	*rrf1;
	
	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");

	Form	*scf;
	Form	*rrf;
	Form	*ppf;
	Form	*invalid;
	try
	{
		Intern	intern;

		std::cout << "\033[34;1m" << "*** SHRUBBERY FORM ***" << "\033[0m" << std::endl;
		scf = intern.makeForm("shrubbery creation", "f1");
		std::cout << std::endl << *scf << std::endl;
		std::cout << std::endl;

		std::cout << "\033[34;1m" << "*** ROBOTOMY FORM ***" << "\033[0m" << std::endl;
		rrf = intern.makeForm("robotomy request", "f2");
		std::cout << std::endl << *rrf << std::endl;
		std::cout << std::endl;
		
		std::cout << "\033[34;1m" << "*** PRESIDENTIAL FORM ***" << "\033[0m" << std::endl;
		ppf = intern.makeForm("presidential pardon", "f3");
		std::cout << std::endl << *ppf << std::endl;

		Bureaucrat	president("President", 1);

		std::cout << "\033[34m" << "PRESIDENT SIGNS THE FORMS" << "\033[0m" << std::endl;
		president.signForm(*scf);
		std::cout << std::endl << *scf << std::endl;
		president.signForm(*rrf);
		std::cout << std::endl << *rrf << std::endl;
		president.signForm(*ppf);
		std::cout << std::endl << *ppf << std::endl;
		std::cout << std::endl;

		std::cout << "\033[34m" << "PRESIDENT EXECUTES THE FORMS" << "\033[0m" << std::endl;
		std::cout << "\033[36m" << "Shrubbery form" << "\033[0m" << std::endl;
		president.executeForm(*scf);
		std::cout << "\033[36m" << "Robotomy form" << "\033[0m" << std::endl;
		president.executeForm(*rrf);
		std::cout << "\033[36m" << "Presidential form" << "\033[0m" << std::endl;
		president.executeForm(*ppf);
		std::cout << std::endl;

		std::cout << "\033[34;1m" << "*** INVALID FORM ***" << "\033[0m" << std::endl;
		invalid = intern.makeForm("Random Form", "nothing");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete rrf1;
	delete scf;
	delete rrf;
	delete ppf;

	return (0);
}
