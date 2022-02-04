/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:08:16 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 13:21:37 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExec;
		bool				_signed;
	public:
		Form();
		Form(Form const &src);
		Form(std::string name, unsigned int gradeToSign,
			unsigned int gradeToExec);
		virtual ~Form();
		Form &operator=(Form const &src);
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class NotSignedException : public std::exception
		{
			virtual const char *what() const throw();
		};
		std::string const	getName() const;
		unsigned int		getGradeToSign() const;
		unsigned int		getGradeToExec() const;
		bool				isSigned() const;
		void				beSigned(Bureaucrat b);
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<(std::ostream &os, Form const &src);

#endif