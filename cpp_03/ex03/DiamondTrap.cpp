/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:54:36 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:28:11 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	_name = "Unknown";
	_hit_points = FragTrap::_Frag_hit_points;
	_energy_points = ScavTrap::_Scav_energy_points;
	_attack_damage = FragTrap::_Frag_attack_damage;
	std::cout << "DiamondTrap " << _name << " was brought into life." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hit_points = FragTrap::_Frag_hit_points;
	_energy_points = ScavTrap::_Scav_energy_points;
	_attack_damage = FragTrap::_Frag_attack_damage;
	// _hit_points = FragTrap::_hit_points;
	// _energy_points = ScavTrap::_energy_points;
	// _attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << name << " was successfully created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	_name = src._name;
	_hit_points = src.FragTrap::_hit_points;
	_energy_points = src.ScavTrap::_energy_points;
	_attack_damage = src.FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << src._name << " was duplicated." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src)
{
	_name = src._name;
	_hit_points = src.FragTrap::_hit_points;
	_energy_points = src.ScavTrap::_energy_points;
	_attack_damage = src.FragTrap::_attack_damage;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "My name is " << _name
		<< " and my ClapTrap name is " << ClapTrap::_name << std::endl;
	// std::cout << "DiamondTrap " << _name << " is " << _name << "\n";
}

void	DiamondTrap::showInfo() const
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit_points: " << _hit_points << std::endl;
	std::cout << "energy_points: " << _energy_points << std::endl;
	std::cout << "attack_damage: " << _attack_damage << std::endl;
}