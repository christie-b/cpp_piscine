/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:22:39 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:20:57 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure::~Cure()
{}

Cure &Cure::operator=(Cure const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
