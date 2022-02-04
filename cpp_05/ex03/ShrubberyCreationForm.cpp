/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:58:41 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:16:39 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry_form", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry_form", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
	{
		Form::operator=(src);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (Form::isSigned() == 0)
	{
		throw Form::NotSignedException();
		return ;
	}
	if (executor.getGrade() > getGradeToExec())
	{
		throw Form::GradeTooLowException();
		return ;
	}
	std::ofstream	os;
	std::string		name = _target + "_shrubbery";
	os.open(name.c_str(), std::ofstream::trunc);
	if (os.is_open())
	{
		os << "          &&& &&  & &&" << std::endl;
		os << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		os << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		os << "   &() &\\/&|()|/&\\/ \'%\" & ()" << std::endl;
		os << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		os << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		os << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		os << "     &&     \\|||" << std::endl;
		os << "             |||" << std::endl;
		os << "             |||" << std::endl;
		os << "             |||" << std::endl;
		os << "       , -=-~  .-^- _" << std::endl;

		os.close();
		return ;
	}
	else
	{
		std::cerr << "File cannot be created or opened\n";
		return ;
	}
}

