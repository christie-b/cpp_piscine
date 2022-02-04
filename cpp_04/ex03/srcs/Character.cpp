/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:37 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:20:29 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Character.hpp"

Character::Character()
{
	_name = "Unknown";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(const Character &src)
{
	if (this == &src)
		return (*this);
	_name = src._name;

	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}


Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	// do not equip materia if it is already present
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] == m)
		{
			return ;
		}
	}	
	if (m == NULL)
		return ;

	for (int i = 0; i < 4; i++)
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
}

void	Character::unequip(int idx)
{
	// If invalid index or item at index doesn't exist
	if (idx < 0 || idx >= 4 || _inventory[idx] == NULL)
		return ;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	// If invalid index or item at index doesn't exist, do nothing
	if (idx < 0 || idx >= 4 || _inventory[idx] == NULL)
	{
		std::cout << _name << " has no materia on index " << idx << std::endl;
		return ;
	}
	std::cout << _name << ": ";
	_inventory[idx]->use(target);
}