/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:09:51 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 11:15:42 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string str;
	int intNb;
	float floatNb;
};

uintptr_t serialize(Data* ptr)
{
	if (ptr == NULL)
		return 0;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data *data = new Data;
	
	data->str = "Hello World!";
	data->intNb = 123;
	data->floatNb = 1.23;

	std::cout << "ORIGINAL DATA STRUCT" << std::endl;
	std::cout << "str: " << data->str << std::endl
		<< "int : " << data->intNb << std::endl
		<< "float : " << data->floatNb << std::endl;
	std::cout << "Address of data : " << data << std::endl << std::endl;

	uintptr_t serialized = serialize(data);

	std::cout << "SERIALIZED VALUE" << std::endl;
	std::cout << serialized << std::endl << std::endl;

	Data *deserialized = deserialize(serialized);

	std::cout << "DESERIALIZED DATA STRUCT" << std::endl;
	std::cout << "str: " << deserialized->str << std::endl
		<< "int : " << deserialized->intNb << std::endl
		<< "float : " << deserialized->floatNb << std::endl;
	std::cout << "Address of data : " << deserialized << std::endl << std::endl;

	delete data;
	return (0);
}