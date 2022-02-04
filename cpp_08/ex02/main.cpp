/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:49:03 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/26 15:43:17 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
void	printStack(MutantStack<T> &stack)
{
	std::cout << "Print with iterator: " << std::endl << stack << std::endl;

	std::cout << std::endl << "Print with reverse iterator:" << std::endl;
	std::cout << YELLOW << "[ ";
	for (typename MutantStack<T>::reverse_iterator it = stack.rbegin(); it != stack.rend(); it++)
	{
		std::cout << *it << ' ';
	}
	std::cout << "]" << RESET;
}

template <typename T>
void	printList(std::list<T> &list)
{
	std::list<int>::iterator it_list = list.begin();
	std::list<int>::iterator ite_list = list.end();

	std::cout << "Print list with iterator:" << std::endl;
	std::cout << GREEN << "[ ";
	while (it_list != ite_list)
	{
		std::cout << *it_list << " ";
		++it_list;
	}
	std::cout  << "]" << RESET;

	std::cout << RESET << std::endl;
	std::list<int>::reverse_iterator r_it_list = list.rbegin();
	std::list<int>::reverse_iterator r_ite_list = list.rend();

	std::cout << std::endl << "Print list with reverse iterator:" << std::endl;
	std::cout << YELLOW << "[ ";
	while (r_it_list != r_ite_list)
	{
		std::cout << *r_it_list << " ";
		++r_it_list;
	}
	std::cout << "]" << RESET << std::endl;
}


int main()
{
	std::cout << BOLDBLUE << "*** SUBJECT MAIN ***" << std::endl << RESET;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top value : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	////////////////////////////////////////////////////////

	std::cout << std::endl << BOLDBLUE << "*** ADDITIONAL TESTS ***" << RESET << std::endl;
	int		array[100];
	for (int i = 0; i < 100; i++)
	{
		array[i] = i * 10;
	};

	std::cout << std::endl << BOLDBLUE << "MUTANT STACK" << std::endl << RESET;

	MutantStack<int> mstack2;

	std::cout << MAGENTA << "Pushing 100 numbers" << std::endl << RESET;
	for (int i = 0; i < 100; i++)
		mstack2.push(array[i]);

	std::cout << "Size: " << mstack2.size() << std::endl;
	std::cout << BLUE << "ORIGINAL STACK" << std::endl << RESET;
	printStack(mstack2);
	std::cout << std::endl;
	std::cout << "Top value: " << mstack2.top() << std::endl;

	std::cout << std::endl << RED << "Popping 10 numbers" << std::endl << RESET;
	for (int i = 0; i < 10; i++)
		mstack2.pop();

	std::cout << "Size: " << mstack2.size() << std::endl;
	std::cout << "Top value: " << mstack2.top() << std::endl;

	MutantStack<int>::iterator it2 = mstack2.begin();

	std::cout << std::endl << BOLDBLUE << "PRINT:" << std::endl << RESET;
	++it2;
	--it2;
	printStack(mstack2);

	/* ----------- LIST ----------- */
	std::cout << std::endl << std::endl << BOLDBLUE << "LIST:" << std::endl << RESET;

	std::list<int> list;

	std::cout << MAGENTA << "Pushing 100 numbers with push_back" << std::endl << RESET;
	for (int i = 0; i < 100; i++)
		list.push_back(array[i]);

	std::cout << "Size: " << list.size() << std::endl;
	std::cout << BLUE << "ORIGINAL LIST" << std::endl << RESET;
	printList(list);
	std::cout << "Top value: " << list.back() << std::endl;

	std::cout << std::endl << RED << "Popping 10 numbers" << std::endl << RESET;
	for (int i = 0; i < 10; i++)
		list.pop_back();

	std::cout << "Size: " << list.size() << std::endl;
	std::cout << "Top value: " << list.back() << std::endl;

	std::cout << std::endl << BOLDBLUE << "PRINT" << std::endl << RESET;
	printList(list);
	return 0;
}