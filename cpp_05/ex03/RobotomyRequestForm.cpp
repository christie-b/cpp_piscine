/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:44:44 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:16:20 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy_form", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy_form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
	{
		Form::operator=(src);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	static int i = 0;
	std::cout << "*** DRILLING SOUNDS ***" << std::endl;
	if (i % 2 == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomization failed." << std::endl;
	i++;
}
