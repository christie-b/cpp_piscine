/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:48:59 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:42 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " animal was created." << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << _type << " animal was copied." << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	_brain = new Brain(); //deep copy
	_brain = src._brain;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " animal was destroyed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*** Meowwwwww ***" << std::endl;
}