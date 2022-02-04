/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:11:00 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/07 08:30:16 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};
Karen::~Karen(){};

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working "
		<< "here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void	Karen::complain(std::string level)
{
	std::string moods[] = {"debug", "info", "warning", "error"};
	void (Karen:: *mood[4]) (void) = {
		mood[0] = &Karen::debug,
		mood[1] = &Karen::info,
		mood[2] = &Karen::warning,
		mood[3] = &Karen::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (moods[i] == level)
		{
			(this->*mood[i])();
			break ;
		}
	}

}
