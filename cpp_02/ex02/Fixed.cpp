/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/10 16:44:37 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0)
{
};

Fixed::Fixed(int const nb)
{
	_fixedValue = nb << _nbBits;
}

Fixed::Fixed(float const nb)
{
	_fixedValue = roundf(nb * (1 << _nbBits));
}

Fixed::Fixed(Fixed const &src)
{
	_fixedValue = src.getRawBits();
}


Fixed &Fixed::operator=(Fixed const &src)
{
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
}

/* -------- COMPARISON OPERATORS OVERLOAD -------- */
bool Fixed::operator>(Fixed const &src) const
{
	return (_fixedValue > src._fixedValue);
}

bool Fixed::operator<(Fixed const &src) const
{
	return (_fixedValue < src._fixedValue);
}

bool Fixed::operator>=(Fixed const &src) const
{
	return (_fixedValue >= src._fixedValue);
}

bool Fixed::operator<=(Fixed const &src) const
{
	return (_fixedValue <= src._fixedValue);
}

bool Fixed::operator==(Fixed const &src) const
{
	return (_fixedValue == src._fixedValue);
}

bool Fixed::operator!=(Fixed const &src) const
{
	return (!(_fixedValue == src._fixedValue));
}

/* -------- ARITHMETIC OPERATORS OVERLOAD -------- */
Fixed Fixed::operator+(Fixed const &src) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() + src.getRawBits());
	return (res);
}

Fixed Fixed::operator-(Fixed const &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(Fixed const &src) const
{
	Fixed res;

	res = (this->toFloat() * src.toFloat());
	return (res);
}

Fixed Fixed::operator/(Fixed const &src) const
{
	Fixed res;
	res = (this->toFloat() / src.toFloat());
	return (res);
}

/* -------- INCREMENT OPERATORS OVERLOAD -------- */
Fixed & Fixed::operator++(void) //pre increment
{
	_fixedValue++;
	return (*this);
}

Fixed Fixed::operator++(int)  //post increment
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed & Fixed::operator--(void) //pre decrement
{
	_fixedValue--;
	return (*this);
}

Fixed Fixed::operator--(int) //post decrement
{
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

/* -------- MEMBER FUNCTIONS -------- */
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
	return (float) _fixedValue / (float) (1 << _nbBits); //
}

int		Fixed::toInt(void) const
{
	return roundf(toFloat());
}

/* -------- MIN AND MAX FUNCTIONS -------- */
Fixed & Fixed::min (Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed &Fixed::min (const Fixed &f1, const Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed &Fixed::max (Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

const Fixed &Fixed::max (const Fixed &f1, const Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

/* -------- OSTREAM OVERLOAD -------- */ 
std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
