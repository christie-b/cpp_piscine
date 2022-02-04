/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:59:10 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 09:47:57 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _sizeMax(0)
{}

Span::Span(unsigned int N) : _sizeMax(N)
{}

Span::~Span()
{}
Span::Span(const Span &src) : _sizeMax(src._sizeMax)
{
	_tab = src._tab;
}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_tab = src._tab;
		_sizeMax = src._sizeMax;
	}
	return (*this);
}

char const *Span::NotEnoughValue::what() const throw()
{
	return ("Container is empty, or there is only 1 number!");
}

char const *Span::NotEnoughSpace::what() const throw()
{
	return ("Container is full, no space left!");
}

void	Span::addNumber( int nb )
{
	if (_sizeMax == _tab.size())
		throw Span::NotEnoughSpace();
	_tab.push_back(nb);
}

int		Span::longestSpan()
{
	if (_tab.size() <= 1)
		throw Span::NotEnoughValue();
	return (*std::max_element(_tab.begin(), _tab.end())
		- *std::min_element(_tab.begin(), _tab.end()));
}

int		Span::shortestSpan()
{
	if (_tab.size() <= 1)
		throw NotEnoughValue();
	//create vector to store a sorted tab
	std::vector<int> sortedTab = _tab;

	std::sort(sortedTab.begin(), sortedTab.end());

	int ret = sortedTab[1] - sortedTab[0];
	for (size_t i = 0; i < sortedTab.size() - 1; i++)
	{
		if (ret > sortedTab[i + 1] - sortedTab[i])
			ret = sortedTab[i + 1] - sortedTab[i];
	}
	return (ret);
}