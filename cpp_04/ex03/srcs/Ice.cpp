/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:27:18 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 10:14:33 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice()
{}

Ice &Ice::operator=(Ice const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
