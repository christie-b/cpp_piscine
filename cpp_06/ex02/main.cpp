/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:18:13 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 11:19:13 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			std::cout << "It is of type A" << std::endl;
			return new A;
		case 1:
			std::cout << "It is of type B" << std::endl;
			return new B;
		case 2:
			std::cout << "It is of type C" << std::endl;
			return new C;
		break;
	}
	return NULL;
}


// If the cast is successful, dynamic_cast returns a value of type new-type.
// If the cast fails and new-type is a pointer type, it returns a null pointer of that type.
// If the cast fails and new-type is a reference type, it throws an exception that matches a handler of type std::bad_cast.

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

void	identify(Base &p)
{
	Base base;
	try
	{
		base = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast)
	{}
	try
	{
		base = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast)
	{}
	try
	{
		base = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast)
	{}
}


int main(void)
{
	std::srand(std::time(NULL));

	Base *base = generate();

	std::cout << "IDENTIFY THROUGH POINTER" << std::endl;
	identify(base);

	std::cout << std::endl;
	std::cout << "IDENTIFY THROUGH REFERENCE" << std::endl;
	identify(*base);

	delete base;
	return (0);
}