/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:06:16 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:52:13 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat was created." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "WrongCat was copied." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat was destroyed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "*** wrong cat sound ***" << std::endl;
}
