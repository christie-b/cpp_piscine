/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:33:03 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:51:48 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Perso("Clap_Perso");

	Perso.attack("Enemy");
	Perso.takeDamage(5);
	Perso.beRepaired(5);

	std::cout << std::endl << "***** CLAPTRAP INFO *****" << std::endl;
	Perso.showInfo();
	std::cout << "****************************" << std::endl;
	return (0);
}