/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:25:43 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/20 10:47:11 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{

	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(Intern const &src);
		Form *makeForm(std::string name, std::string target);
		Form *makeShrubbery(std::string target);
		Form *makeRobotomy(std::string target);
		Form *makePresidential(std::string target);
		class formException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif