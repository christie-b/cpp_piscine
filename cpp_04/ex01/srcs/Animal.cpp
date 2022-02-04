/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:48:54 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:20 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

Animal::Animal()
{
	_type = "Default";
	std::cout << "Animal was created." << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal was copied." << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "*** animal sound ***" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}