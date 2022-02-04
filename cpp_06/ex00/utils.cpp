/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:09:36 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 10:52:31 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"


double ft_stod(std::string const &str)
{
	double		d_nb = 0.0;
	int			sign = 1;
	size_t		i = 0;
	bool		is_float = false;
	int			len;

	if (str.size() != 0 && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i++] == '-')
		{
			sign = -1;
		}
	}
	while (i < str.size())
	{
		if (str[i] != '.' && str[i] != 'f')
		{
			d_nb = d_nb * 10 + str[i] - 48;
		}
		if (str[i] == 'f')
		{
			is_float = true;
		}
		i++;
	}
	size_t floatingPointIndex = str.find('.');
	len = is_float ? str.size() - 2 : str.size() - 1;

	if (floatingPointIndex != std::string::npos)
	{
		d_nb /= pow(10, len - floatingPointIndex); //to move the . to the right pos
	}

	return d_nb * sign;
}