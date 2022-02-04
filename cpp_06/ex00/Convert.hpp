/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:38:53 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/24 10:24:19 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cfloat>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include <sstream>

class Convert
{
	private:
		Convert();
		Convert(Convert const &src);
		Convert& operator=(Convert const &src);

	public:
		Convert(std::string str);
		~Convert();
		void PrintValue(std::string str);
		void PrintFloat(float value, bool dotFound);
		void PrintDouble(double value, bool dotFound);
};

double ft_stod(std::string const &str);


#endif