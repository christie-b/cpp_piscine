/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:03:55 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/14 10:05:18 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl << "--------- Get Type ---------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << "-------- Make Sound ---------" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl << "*****************************" << std::endl;

	const WrongAnimal* Wrongmeta = new WrongCat();
	std::cout << std::endl << "--------- Get Type ---------" << std::endl;
	std::cout << Wrongmeta->getType() << " " << std::endl;
	std::cout << std::endl << "-------- Make Sound ---------" << std::endl;
	Wrongmeta->makeSound();
	std::cout << std::endl << "----------------------------" << std::endl;

	delete j;
	delete i;
	delete meta;
	delete Wrongmeta;
	return (0);
}
