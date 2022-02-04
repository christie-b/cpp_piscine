/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:33:03 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:58:56 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
	ClapTrap Perso("Clap_perso");
	Perso.attack("Enemy");
	Perso.takeDamage(5);
	Perso.beRepaired(5);

	std::cout << std::endl << "***** CLAPTRAP INFO *****" << std::endl;
	Perso.showInfo();
	std::cout << "*************************" << std::endl << std::endl;

	ScavTrap Scav("Scav_perso");;
	Scav.attack("Another Enemy");
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.guardGate();

	std::cout << std::endl << "***** SCAVTRAP INFO *****" << std::endl;
	Scav.showInfo();
	std::cout << "*************************" << std::endl << std::endl;

	FragTrap Frag("Frag_perso");;
	Frag.attack("THE Enemy");
	Frag.takeDamage(15);
	Frag.beRepaired(15);
	Frag.highFivesGuys();

	std::cout << std::endl << "***** FRAGTRAP INFO *****" << std::endl;
	Frag.showInfo();
	std::cout << "*************************" << std::endl << std::endl;
	return (0);
}