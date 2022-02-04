/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:28:15 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:15:39 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/AMateria.hpp"
#include "../incl/Character.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " : Using unknown materia type." << std::endl;
}
