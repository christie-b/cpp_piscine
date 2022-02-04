/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:03:06 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 11:25:56 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
	public:
	Zombie(std::string name = "Unknown");
	~Zombie();
	void	announce( void );
	void	setname(std::string Name);

	private:
	std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif