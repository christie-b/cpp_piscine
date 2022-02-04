/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:32:57 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:40:37 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Unknown";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " was destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << _name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return (*this);
	this->_attack_damage = src._attack_damage;
	this->_energy_points = src._energy_points;
	this->_hit_points = src._hit_points;
	this->_name = src._name;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attack " << target
		<< ", causing " << _attack_damage << " points of damage!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " receives " << amount
		<< " points of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " was repaired, and received " << amount
		<< " points." << std::endl;
}

void	ClapTrap::showInfo() const
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit_points: " << _hit_points << std::endl;
	std::cout << "energy_points: " << _energy_points << std::endl;
	std::cout << "attack_damage: " << _attack_damage << std::endl;
}