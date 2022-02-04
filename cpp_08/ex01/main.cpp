/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:48:50 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 16:03:07 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << BOLDBLUE << "Subject's Tests :" << std::endl << RESET;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "Adding more numbers than Span size :" << std::endl << RESET;
	try
	{
		Span sp = Span(3);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "Adding 10K numbers using the Template function :" << std::endl << RESET;
	try
	{
		std::vector<int> random;
		Span sp = Span(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << "vector size: " << random.size() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "Adding more numbers than Span size through the Template function :" << std::endl << RESET;
	try
	{
		std::vector<int> random;
		Span sp = Span(5);
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "longestSpan with an empty Container :" << std::endl << RESET;
	try
	{
		Span sp = Span(5);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "longestSpan with 1 number :" << std::endl << RESET;
	try
	{
		Span sp = Span(5);
		sp.addNumber(10);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "shortestSpan with an empty Container :" << std::endl << RESET;
	try
	{
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << BOLDBLUE << "shortestSpan with 1 number :" << std::endl << RESET;
	try
	{
		Span sp = Span(5);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

