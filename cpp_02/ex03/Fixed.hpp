/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:53:28 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/07 13:22:03 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedValue;
		static int const	_nbBits = 8;

	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const f_nb);
		Fixed(Fixed const &src); //constructeur par copie
		
		~Fixed(void);

		Fixed &operator =(Fixed const &src); //overload d’opérateur d’assignation, permet de copier correctement un obj de meme classe
		

		/* COMPARISON OPERATORS */
		bool operator>( Fixed const &src ) const;
		bool operator<( Fixed const &src ) const;
		bool operator>=( Fixed const &src ) const;
		bool operator<=( Fixed const &src ) const;
		bool operator==( Fixed const &src ) const;
		bool operator!=( Fixed const &src ) const;

		/* ARITHMETIC OPERATORS */
		Fixed operator+( Fixed const &src ) const;
		Fixed operator-( Fixed const &src ) const;
		Fixed operator*( Fixed const &src ) const;
		Fixed operator/( Fixed const &src ) const;

		/* INCREMENT OPERATORS */
		Fixed &operator++( void ); //pre increment
		Fixed &operator--( void ); //pre decrement
		Fixed operator++( int );  //post increment
		Fixed operator--( int ); //post decrement

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min ( Fixed &f1, Fixed &f2);
		const static Fixed &min ( const Fixed & first, const Fixed &second);
		static Fixed &max ( Fixed &f1, Fixed &f2);
		const static Fixed &max ( const Fixed & first, const Fixed &second);

};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif