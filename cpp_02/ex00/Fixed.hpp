/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:28 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/07 13:18:59 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int					_fixedValue;
		static int const	_nbBits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &src); //constructeur par copie
		~Fixed(void);

		Fixed &operator=(Fixed const &src); //overload d’opérateur d’assignation, permet de copier correctement un obj de meme classe
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif