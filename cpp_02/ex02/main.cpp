/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:26 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/10 15:27:44 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "-------- ARITHMETIC OPERATORS OVERLOAD --------\n";
	std::cout << "Fixed(5.05f) = " << Fixed(5.05f) << " | Fixed(2) == " << Fixed(2) << "\n";
	std::cout << "Fixed(5.05f) + Fixed(2) = " << Fixed(5.05f) + Fixed(2) << "\n";
	std::cout << "Fixed(5.05f) - Fixed(2) = " << Fixed(5.05f) - Fixed(2) << "\n";
	std::cout << "Fixed(5.05f) * Fixed(2) = " << Fixed(5.05f) * Fixed(2) << "\n";
	std::cout << "Fixed(5.05f) / Fixed(2) = " << Fixed(5.05f) / Fixed(2) << "\n\n";

	std::cout << "------------------ MIN / MAX ------------------\n";
	std::cout << "a = " << a << "\tb = " << b << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << "\n";
	std::cout << "max(a, b): " << Fixed::max(a, b) << "\n\n";

	std::cout << "-------- COMPARISON OPERATORS OVERLOAD --------\n";
	std::cout << "Fixed(5.0f) == Fixed(5): " << (Fixed(5.0f) == Fixed(5)) << "\n";
	std::cout << "Fixed(5.0f) != Fixed(5): " << (Fixed(5.0f) != Fixed(5)) << "\n";
	std::cout << "Fixed(5.1f)  > Fixed(5): " << (Fixed(5.1f) > Fixed(5)) << "\n";
	std::cout << "Fixed(5.1f)  < Fixed(5): " << (Fixed(5.1f) < Fixed(5)) << "\n";
	std::cout << "Fixed(5.1f) >= Fixed(5): " << (Fixed(5.1f) >= Fixed(5)) << "\n";
	std::cout << "Fixed(5.1f) <= Fixed(5): " << (Fixed(5.1f) <= Fixed(5)) << "\n";
	std::cout << "Fixed(5.0f) >= Fixed(5): " << (Fixed(5.0f) >= Fixed(5)) << "\n";
	std::cout << "Fixed(5.0f) <= Fixed(5): " << (Fixed(5.0f) <= Fixed(5)) << "\n";

	return 0;
}