/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:25:40 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:14:35 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

Intern::~Intern()
{}

char const *Intern::formException::what(void) const throw()
{
	return ("Error: This is not a correct form!");
}

Form *Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *theForm;
	int		filled = 0;

	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form*	(Intern::*form[3]) (std::string target) =
	{
		form[0] = &Intern::makeShrubbery,
		form[1] = &Intern::makeRobotomy,
		form[2] = &Intern::makePresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			theForm = (this->*(form[i]))(target);
			filled = 1;
			std::cout << "Intern creates " << theForm->getName() << std::endl;
			break ;
		}
	}
	if (filled == 0)
		throw formException();
	return (theForm);
}