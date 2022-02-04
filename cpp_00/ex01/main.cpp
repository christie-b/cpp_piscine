/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:38:43 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/04 10:11:45 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	bool		isRunning = true;
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "* Phonebook *" << std::endl;

	while (isRunning)
	{
		std::cout << "Please enter your command [ADD, SEARCH, EXIT]:" << std::endl << "> ";
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			phonebook.addContact();
		}
		else if(input == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if(input == "EXIT")
		{
			std::cout << "Exiting... " << std::endl;
			isRunning = false;
		}
		else
			std::cout << "Please enter a valid command!" << std::endl;
	}
}
