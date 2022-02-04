/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:52:17 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 15:43:06 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

int	main(void)
{
	int			array1[5] = {10, 5, 20, 15, 7};
	std::string	array2[3] = {"Hello", "World", "!!!"};
	float		array3[4] = {1.1f, 2.2, 3.3f, 4.4f};

	std::cout << "INT ARRAY" << std::endl;
	::iter<int>(array1, 5, ::display<int>);

	std::cout << "STRING ARRAY" << std::endl;
	::iter<std::string>(array2, 3, ::display<std::string>);

	std::cout << "FLOAT ARRAY" << std::endl;
	::iter<float>(array3, 4, ::display<float>);

	return 0;
}
