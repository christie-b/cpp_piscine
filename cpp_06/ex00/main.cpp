/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:26:14 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 11:25:12 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	check_arg(std::string str)
{
	int	nb_f = 0;
	int	nb_dot = 0;
	int	nb_other = 0;
	int	nb_sign = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf"
		|| str == "-inf" || str == "+inf" || str == "nan" )
	{
		return (1);
	}
	if (str.size() > 1) //not a char, so check if str is a string
	{
		for (int i = 0; i < static_cast<int>(str.size()); i++)
		{
			if (!isdigit(str[i]) && str[i] != '.' && str[i] != '+' && str[i] != '-' 
			&& i != static_cast<int>(str.size()) && str[i] != 'f') //check if it has an alpha, except if it ends with an f (for floats)
				return (0);
		}
	}
	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if (str[i] == '.')
			nb_dot++;
		if (str[i] == 'f')
			nb_f++;
		if (str[i] == '+' || str[i] == '-')
			nb_sign++;
		if (isdigit(str[i]) == 0 && str[i] != '.' && str[i] != 'f'
			&& isprint(str[i]) == 0)
			nb_other++;
	}
	if (nb_f == 1)
	{
		if (str[str.length() - 1] != 'f')
			return (0);
	}
	if (nb_dot > 1 || nb_f > 1 || nb_other > 0 || nb_sign > 1)
		return (0);
	return (1);
}

int	main(int argc, char* argv[])
{
	if (argc == 2)
	{
		if (check_arg(argv[1]))
			Convert convert(argv[1]);
		else
			std::cout << "Invalid argument." << std::endl;
	}
	else
	{
		std::cerr << "Usage: ./convert <char>/<int>/<float>/<double>." << std::endl;
		return (-1);
	}
	return (0);
}
