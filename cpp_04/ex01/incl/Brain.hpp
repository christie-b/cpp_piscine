/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:13:08 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/14 10:57:46 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define NB_IDEAS 100

class Brain
{
	protected:
		std::string _ideas[NB_IDEAS];
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &src);
};

#endif