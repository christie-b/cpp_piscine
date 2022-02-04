/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:07 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:40:15 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "Unknown";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_Scav_hit_points = 100;
	_Scav_energy_points = 50;
	_Scav_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " is now created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_Scav_hit_points = 100;
	_Scav_energy_points = 50;
	_Scav_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " is now created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src._name)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	_Scav_hit_points = src._Scav_hit_points;
	_Scav_energy_points = src._Scav_energy_points;
	_Scav_attack_damage = src._Scav_attack_damage;
	std::cout << "ScavTrap " << src._name << " has been copied succesfully\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " was savagely destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	_Scav_hit_points = src._Scav_hit_points;
	_Scav_energy_points = src._Scav_energy_points;
	_Scav_attack_damage = src._Scav_attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << _name << " assaults " << target << ", producing " << _attack_damage << " massive points of damage\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::showInfo() const
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit_points: " << _hit_points << std::endl;
	std::cout << "energy_points: " << _energy_points << std::endl;
	std::cout << "attack_damage: " << _attack_damage << std::endl;
}