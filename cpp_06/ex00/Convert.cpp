/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:39:11 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 11:38:14 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(const Convert& arg)
{
	(void)arg;
}

Convert::Convert(std::string str)
{
	double value;

	if (str == "nan" || str == "+inf" || str == "-inf" || str == "inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str + "f" << std::endl;
		std::cout << "double : " << str << std::endl;
		return ;
	}
	else if (str == "nanf" || str == "+inff" || str == "-inff" || str == "inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str << std::endl;
		std::cout << "double : " << str.substr(0, str.length() - 1) << std::endl;
		return ;
	}
	if (str.length() == 1 && isprint(str[0]) && isdigit(str[0]) == 0) //print char
	{
		std::cout << "char : " << str << std::endl;
		std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float : " << static_cast<int>(str[0]) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<int>(str[0]) << ".0" << std::endl;
	}
	else
	{
		try
		{
			value = ft_stod(str);
		}
		catch (const std::exception& e)
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double : impossible" << std::endl;
			return ;
		}
		this->PrintValue(str);
	}
}

Convert::~Convert()
{}

Convert& Convert::operator=(const Convert& arg)
{
	(void)arg;
	return (*this);
}

int	countChar(std::string str, char c)
{
	int counter = 0;

	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if (str[i] == c)
			counter++;
	}
	return counter;
}

void Convert::PrintValue(std::string str)
{
	double	value;
	bool	dotFound = false;
	int		nb;

	std::istringstream(str) >> nb;
	if (str.find(".") != std::string::npos) //found dot
	{
		dotFound = true;
		if (nb == ft_stod(str)) //int and not double
			dotFound = false;
	}
	value = ft_stod(str);
	std::cout << "char : ";
	if (value < 0 || value > 127)
	{
		std::cout << "impossible" << std::endl;
	}
	else if (isprint(value) == 0)
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
	{
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	}

	std::cout << "int : ";
	if (value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(value) << std::endl;
	}

	std::cout << "float : ";
	if ( value < -1 * std::numeric_limits<float>::max()
		|| value > std::numeric_limits<float>::max())
	{
		std::cout << "impossible" << std::endl;
	}
	else
		PrintFloat(static_cast<float>(value), dotFound);

	std::cout << "double : ";
	PrintDouble(static_cast<double>(value), dotFound);
}


void Convert::PrintFloat(float value, bool dotFound)
{
	if (dotFound)
	{
		std::cout << value << "f" << std::endl;
	}
	else
		std::cout << value << ".0f" << std::endl;
}

void Convert::PrintDouble(double value, bool dotFound)
{
	if (dotFound)
	{
		std::cout << value << std::endl;
	}
	else
		std::cout << value << ".0" << std::endl;
}
