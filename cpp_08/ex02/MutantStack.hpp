/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:49:04 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 15:05:49 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define MAGENTA	"\033[35m"
# define BLUE		"\033[34m"
# define BOLDBLUE	"\033[1m\033[34m"

//https://en.cppreference.com/w/cpp/container/stack
//https://www.cplusplus.com/reference/deque/deque/
//https://www.cplusplus.com/reference/stack/stack/
//https://en.cppreference.com/w/cpp/container/deque

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		MutantStack &operator=(MutantStack const &src)
		{
			return ((MutantStack &)src);
		}
		~MutantStack(void) {}


//A typename keyword tells the compiler that an identifier is a type (rather than a static member variable)
	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin(void) { return this->c.begin(); }
	reverse_iterator		rbegin(void) { return this->c.rbegin(); }
	const_iterator			begin(void) const { return this->c.begin(); }
	const_reverse_iterator	rbegin(void) const { return this->c.rbegin(); }

	iterator				end(void) { return this->c.end(); }
	reverse_iterator		rend(void) { return this->c.rend(); }
	const_iterator			end(void) const { return this->c.end(); }
	const_reverse_iterator	rend(void) const { return this->c.rend(); }

};

template <typename T>
std::ostream	&operator<<(std::ostream &os, MutantStack<T> &stack)
{

	os << GREEN << "[ ";
	for	(typename MutantStack<T>::iterator it = stack.begin();
		it != stack.end(); ++it)
	{
		os << *it << ' ';
	}
	os << ']' << RESET;
	return (os);
}

#endif