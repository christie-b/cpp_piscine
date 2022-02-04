/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: size22/01/14 10:11:32 by cboutier          #+#    #+#             */
/*   Updated: size22/01/14 11:05:08 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	int size = 6;

	// Does not compile as animal class is abstract
	// Animal animal;

	std::cout << std::endl << "***** Animals *****" << std::endl;
	Animal *animals[size];
	for (int i = 0; i < size / 2; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; i++)
	{
		animals[i] = new Cat();
	}
	std::cout << "******************" << std::endl << std::endl;

	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}
	delete j;//should not create a leak
	delete i;
}