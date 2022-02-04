/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:52:32 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 15:35:10 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array<T>(void) : _array(NULL), _size(0)
		{}
	
		Array<T>(unsigned int n) : _size(n)
		{
			_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_array[i] = T(); //initializes everything to 0
		}

		~Array<T>()
		{
			delete[] _array;
		}
	
		Array<T>(Array const &src) : _size(src._size)
		{
			_array = new T[src._size];
			for (unsigned int i = 0; i < src._size; i++)
				_array[i] = src._array[i];
		}

		Array<T> &operator=(Array<T> const &src)
		{
			if (this != &src)
			{
				_array = new T[src._size];
				_size = src._size;
				for (unsigned int i = 0; i < src._size; i++)
					_array[i] = src._array[i];
			}
			return (*this);
		}

		T	&operator[](unsigned int index)
		{
			if (index >= _size || index < 0)
				throw std::exception();
			return (_array[index]);
		}

		unsigned int	size() const
		{
			return (_size);
		}
};

#endif