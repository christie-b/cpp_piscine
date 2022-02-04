/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:11:03 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/05 16:41:55 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon *weapon);
		void		setWeapon(Weapon &weapon);

	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif