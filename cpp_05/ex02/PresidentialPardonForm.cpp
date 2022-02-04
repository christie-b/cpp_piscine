/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:47:04 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 11:16:05 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential_form", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential_form", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src)
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
	{
		Form::operator=(src);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}