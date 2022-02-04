/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:03:30 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/06 16:43:33 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie()
{
	Zombie *zombie;
	
	zombie = new Zombie();
	return (zombie);
}

Zombie*	newZombie( std::string name )
{
	Zombie *zombie;
	
	zombie = new Zombie(name);
	return (zombie);
}
