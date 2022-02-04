/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:52:38 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 15:41:31 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> arr1;
	Array<char> arr2(10);
	Array<int> arr3(10);

	std::cout << "Default value" << std::endl;
	std::cout << arr3[0] << std::endl << std::endl;

	std::cout << "Modifying value from :" << std::endl;
	std::cout << (int)arr2[5] << std::endl;
	std::cout << "to : " << std::endl;
	arr2[5] = 'a';
	std::cout << arr2[5] << std::endl;
	std::cout << std::endl;

	std::cout << "Testing exception with invalid index" << std::endl;
	try
	{
		std::cout << arr2[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Out of bounds" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Testing exception with invalid index" << std::endl;
	try
	{
		std::cout << arr3[10] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Out of bounds" << std::endl;
	}
	std::cout << std::endl;
	
	//fill arr3 with numbers
	for (unsigned int i = 0; i < arr3.size(); i++)
		arr3[i] = i;

	//copy constructor
	Array<int> test4(arr3);

	//assignment operator
	arr1 = test4;

	std::cout << "Original int array" << std::endl;
	std::cout << "Size : " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;

	std::cout << "Copy constructor array" << std::endl;
	std::cout << "Size : " << test4.size() << std::endl;
	for (unsigned int i = 0; i < test4.size(); i++)
		std::cout << test4[i] << " ";
	std::cout << std::endl;

	std::cout << "Assignment operator array" << std::endl;
	std::cout << "Size : " << arr1.size() << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;


	return (0);
}


/* MAIN GIVEN IN SUBJECT */

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	std::srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = std::rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cout << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}

// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 		numbers[i] = std::rand();

// 	delete [] mirror;
// 	return 0;
// }