/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:39:05 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/03 15:15:24 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iomanip>
# include <climits>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
		void	ft_display_contacts();

	private:
		Contact		_contacts[8];
		int			_current;
		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_darkest_secret;
		std::string	_phone_number;
};

#endif