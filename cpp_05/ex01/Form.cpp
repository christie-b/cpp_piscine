/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:53:28 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 13:19:03 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _gradeToSign(0), _gradeToExec(0), _signed(0)
{}

Form::Form(Form const &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec), _signed(src._signed)
{
	*this = src;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) :	_name(name), _gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec), _signed(0)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

Form::~Form()
{}

char const *Form::GradeTooHighException::what(void) const throw()
{
	return ("Error: Grade is too high!");
}

char const *Form::GradeTooLowException::what(void) const throw()
{
	return ("Error: Grade is too low!");
}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
	{
		(std::string)_name = src._name;
		const_cast<unsigned int&>(_gradeToExec) = src._gradeToExec;
		const_cast<unsigned int&>(_gradeToSign) = src._gradeToSign;
		_signed = src._signed;
	}
	return *this;
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() > getGradeToSign())
		throw Form::GradeTooLowException();
	else
		_signed = 1;
}

/* GETTERS */
std::string const	Form::getName(void) const
{
	return (_name);
}

unsigned int	Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

unsigned int	Form::getGradeToExec(void) const
{
	return (_gradeToExec);
}

bool	Form::isSigned(void) const
{
	return (_signed);
}

std::ostream &operator<<(std::ostream &os, Form const &src)
{
	os << "\033[90m" << "######### STATE OF THE FORM #########" << std::endl
	<< "Form name: " << src.getName() << std::endl
	<< "Form's grade to sign: " << src.getGradeToSign() << std::endl
	<< "Form's grade to execute: " << src.getGradeToExec() << std::endl
	<< "Form's current signed status: ";

	if (src.isSigned() == 1)
		os << "Form is signed." << std::endl;
	else
		os << "Form is not signed." << std::endl;
	os << "########## END OF THE FORM ##########" << "\033[0m" << std::endl;
	return (os);
}