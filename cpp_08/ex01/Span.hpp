/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:35:00 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 14:00:27 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BOLDBLUE	"\033[1m\033[34m"

class Span
{
	private:
		unsigned int		_sizeMax;
		std::vector<int>	_tab;
		Span();
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span &operator=(Span const &src);

		void			addNumber(int nb);
		int				shortestSpan(void);
		int				longestSpan(void);

		// Exception
		class NotEnoughSpace : public std::exception
		{
			virtual const char *what() const throw();
		};

		class NotEnoughValue : public std::exception
		{
			virtual const char *what() const throw();
		};

		template<typename T>
		void	addNumber(T start, T end)
		{
			int dist = std::distance(start, end);
			if (dist + _tab.size() > _sizeMax)
				throw Span::NotEnoughSpace();
			_tab.insert(_tab.end(), start, end); //inserts elements from range [start, end] before pos.
		}

};

#endif