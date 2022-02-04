/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:49:04 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:50:43 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << _type << " animal was created." << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << _type << " animal was copied." << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << _type << " animal was destroyed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "*** Woof Woof ***" << std::endl;
}