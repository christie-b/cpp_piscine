/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:22:27 by cboutier          #+#    #+#             */
/*   Updated: 2022/01/06 11:46:17 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(std::string line, std::string to_find, std::string to_replace)
{
	while (1)
	{
		int start = line.find(to_find);
		if (start != -1)
		{
			line.erase(start, to_find.length());
			line.insert(start, to_replace);
		}
		else
			return (line);
	}
}

int	printError(void)
{
	std::cout	<< "Usage: ./replace filename s1 s2, in which: \n"
				<< "- filename: name of the file to be editted,\n"
				<< "- s1: string to be replaced in filename, cannot be empty and\n"
				<< "- s2: thestring that will replace s1 in filename, cannot be empty.\n";
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (printError());

	std::ifstream	infile(av[1]);
	if (!infile)
	{
		std::cerr	<< av[1] << ": Cannot open file\n";
		return (1);
	}
	else if (!(*av[2]) || !(*av[3]))
	{
		infile.close();
		return (printError());
	}

	std::string name;
	name = std::string(av[1]).append(".replace");
	std::ofstream	outfile;
	outfile.open(name);
	if (!outfile)
	{
		infile.close();
		std::cerr	<< av[1] << ".replace: Cannot create new file\n";
		return (1);
	}
	std::string line;
	while (getline(infile, line))
		{
			line = replaceString(line, av[2], av[3]);
			outfile << line << std::endl;
		}

	infile.close();
	outfile.close();

	return 0;
}