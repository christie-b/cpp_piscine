/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/10 16:58:16 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = nb << _nbBits;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf(nb * (1 << _nbBits));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	//check for self assignment
	if (this == &src)
	{
		return (*this);
	}
	this->_fixedValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (float) _fixedValue / (float) (1 << _nbBits);
}

int		Fixed::toInt(void) const
{
	return roundf(toFloat());
}

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}