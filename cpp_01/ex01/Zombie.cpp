/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:02:57 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 09:43:32 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout << '<' << _name << ">" << " called the destructor" << std::endl;

}

void	Zombie::announce( void )
{
	std::cout << '<' << _name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	_name = name;
}


Zombie*	newZombie( std::string name )
{
	Zombie *zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void	randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
