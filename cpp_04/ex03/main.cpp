/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:26:02 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/17 15:39:22 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/AMateria.hpp"
#include "incl/Character.hpp"
#include "incl/Ice.hpp"
#include "incl/Cure.hpp"
#include "incl/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	/* Copy MateriaSource and Character */
	MateriaSource *mater = new MateriaSource(*(MateriaSource *)src);
	Character *charac = new Character(*(Character *)me);

	Ice *iceToLearn = new Ice();

	mater->learnMateria(iceToLearn);
	mater->learnMateria(new Cure());


	charac->equip(mater->createMateria("ice"));
	charac->equip(mater->createMateria("ice"));

	std::cout << "***********************************" << std::endl;
	charac->use(0, *bob);
	charac->use(1, *bob);
	charac->use(2, *bob);
	charac->use(3, *bob);
	std::cout << "***********************************" << std::endl;

	delete bob;
	delete src;
	delete me;
	delete mater;
	delete charac;

	return 0;
}