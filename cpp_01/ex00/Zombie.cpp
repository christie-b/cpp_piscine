/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:02:57 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/04 16:57:00 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout << '<' << _name << ">" << " called the destructor" << std::endl;

}

void	Zombie::announce( void )
{
	std::cout << '<' << _name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}
