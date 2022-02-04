/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:33:24 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/06 15:56:43 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if (ac != 2)
	{
		std::cout << "Usage: ./karenFilter \"LEVEL\"" << std::endl;
		return (0);
	}
	karen.complain(av[1]);
	return (0);
}