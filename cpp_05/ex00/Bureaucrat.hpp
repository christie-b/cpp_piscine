/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:34:38 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 10:36:04 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string	const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &src);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		std::string			getName() const;
		unsigned int		getGrade() const;
		void				inc_grade();
		void				dec_grade();
};
std::ostream		&operator<<(std::ostream &os, const Bureaucrat &b);

#endif
