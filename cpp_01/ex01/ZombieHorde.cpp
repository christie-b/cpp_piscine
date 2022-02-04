/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 09:32:31 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 13:20:56 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	int	i = 0;
	std::stringstream ss;

	while (i < N)
	{
		std::stringstream ss;
		ss << name << "_" << i;
		horde[i].setname(ss.str());
		i++;
	}
	return (horde);
}