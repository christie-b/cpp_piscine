/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:02:41 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/07 08:45:48 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombieStack = Zombie("Stack_zombie");
	zombieStack.announce();

	Zombie *heapZombie = newZombie("Heap_zombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Zom");
	return(0);
}
