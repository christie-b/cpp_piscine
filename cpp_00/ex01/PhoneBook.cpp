/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:44:07 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/04 10:13:54 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_current = 0;
	_index = 0;
};

void	PhoneBook::addContact()
{
	Contact newContact;
	
	if (this->_current >= 8)
	{
		std::cout << "Phonebook is full !" << std::endl;
		return ;
	}
	std::cout << "First Name: ";
	getline(std::cin, _first_name);
	newContact.set_first_name(_first_name);
	std::cout << "Last Name: ";
	getline(std::cin, _last_name);
	newContact.set_last_name(_last_name);
	std::cout << "Nickname: ";
	getline(std::cin, _nickname);
	newContact.set_nickname(_nickname);
	std::cout << "Phone number: ";
	getline(std::cin, _phone_number);
	newContact.set_phone_number(_phone_number);
	std::cout << "Darkest Secret: ";
	getline(std::cin, _darkest_secret);
	newContact.set_darkest_secret(_darkest_secret);
	this->_contacts[_current % 8] = newContact;
	this->_current++;

	if (this->_current <= 8)
		this->_index = this->_current;
	std::cout << "CONTACT ADDED SUCCESSFULLY" << std::endl;
}


std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	PhoneBook::ft_display_contacts()
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(_contacts[i].get_first_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_last_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_nickname()) << "|"
		<< std::endl;
	}
}

void	PhoneBook::searchContact()
{
	unsigned int index;
	ft_display_contacts();
	std::cout << "Enter The index: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "INVALID INDEX !\n";
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contacts[index].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].get_last_name() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "INVALID INDEX !\n";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

PhoneBook::~PhoneBook()
{
}
