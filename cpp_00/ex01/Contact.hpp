/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:39:07 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/04 10:06:59 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		std::string		_phone_number;

	public:
		Contact();
		~Contact();
		std::string		get_first_name();
		std::string		get_last_name();
		std::string		get_nickname();
		std::string		get_darkest_secret();
		std::string		get_phone_number();

		void			set_first_name(std::string first_name);
		void			set_last_name(std::string last_name);
		void			set_nickname(std::string nickname);
		void			set_darkest_secret(std::string darkest_secret);
		void			set_phone_number(std::string phone_number);
};

#endif