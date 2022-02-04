/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:52:56 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:40:24 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "Unknown";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_Frag_hit_points = 100;
	_Frag_energy_points = 100;
	_Frag_attack_damage = 30;
	std::cout << "FragTrap " << _name << " has finally been created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_Frag_hit_points = 100;
	_Frag_energy_points = 100;
	_Frag_attack_damage = 30;
	std::cout << "FragTrap " << _name << " has finally been created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was properly destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src._name)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	_Frag_hit_points = src._Frag_hit_points;
	_Frag_energy_points = src._Frag_energy_points;
	_Frag_attack_damage = src._Frag_attack_damage;
	std::cout << "FragTrap " << _name << " was properly copied." << std::endl;

}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	_Frag_hit_points = src._Frag_hit_points;
	_Frag_energy_points = src._Frag_energy_points;
	_Frag_attack_damage = src._Frag_attack_damage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << _name << " jumped on " << target << ", savagely causing " << _attack_damage << " points of damage.\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " asks for a high five !" << std::endl;
}

void	FragTrap::showInfo() const
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit_points: " << _hit_points << std::endl;
	std::cout << "energy_points: " << _energy_points << std::endl;
	std::cout << "attack_damage: " << _attack_damage << std::endl;
}
