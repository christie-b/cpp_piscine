/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:03:06 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/06 16:43:09 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
	Zombie(std::string);
	Zombie(){_name = "default";};
	~Zombie();
	void	announce( void );

	private:
	std::string	_name;
};

Zombie*	newZombie();
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif