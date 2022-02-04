/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 09:31:44 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/06 16:49:50 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	zombies = zombieHorde(5, "Zom");
	int i = 0;
	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}