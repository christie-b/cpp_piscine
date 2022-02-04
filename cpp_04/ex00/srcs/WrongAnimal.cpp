/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:03:51 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:09 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal was created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "WrongAnimal was copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal was destroyed." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*** wrong animal sound ***" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}