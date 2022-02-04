/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:10:48 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 16:39:04 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon called the destructor\n";
}

const std::string	&Weapon::getType()
{
	return (_type);
}

void				Weapon::setType(std::string type)
{
	_type = type;
}
