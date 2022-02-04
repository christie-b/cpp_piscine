/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:19:05 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 14:55:11 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._memory[i])
			_memory[i] = src._memory[i]->clone();
		else
			_memory[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (src._memory[i])
			_memory[i] = src._memory[i]->clone();
		else
			_memory[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (_memory[i])
			delete _memory[i];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	// check if the exact same item already exists, if yes, do nothing
	// => avoid a double-free during destruction
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] == m) {
			return ;
		}	
	}
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
		if (_memory[i] == NULL)
		{
			_memory[i] = m;
			return ;
		}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] && _memory[i]->getType() == type)
			return (_memory[i]->clone());
	}
	return (NULL);
}
