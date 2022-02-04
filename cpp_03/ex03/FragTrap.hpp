/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:57:32 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/13 09:39:29 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int		_Frag_hit_points;
		int		_Frag_energy_points;
		int		_Frag_attack_damage;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		FragTrap	&operator=(FragTrap const &src);
		void	attack(std::string const &target);
		void	highFivesGuys(void);
		void	showInfo() const;

	private:

};

#endif