/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:57:08 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 11:04:31 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of the string :\t" << &str << std::endl;
	std::cout << "address of stringPTR :\t" << stringPTR << std::endl;
	std::cout << "address of stringREF :\t" << &stringREF << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "ptr : " << *stringPTR << std::endl;
	std::cout << "ref : " << stringREF << std::endl;

}