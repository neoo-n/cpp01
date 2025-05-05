/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:11:17 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/21 12:21:05 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <fstream>
#include <limits>
#include <cstring>

static int	open_files(std::fstream &f1, std::fstream &f2, char **av)
{
	std::string	file2 = av[1];
	std::string	rep = ".replace";

	file2.append(rep);
	f1.open(av[1], std::ios::in);
	if (!f1.is_open())
	{
		std::cerr << "Error opening file 1 : " << std::strerror(errno) << std::endl;
		return (0);
	}
	f2.open(file2.c_str(), std::ios::out);
	if (!f2.is_open())
	{
		std::cout << "Error opening file 2 : " << std::strerror(errno) << std::endl;
		f1.close();
		return (0);
	}
	return (1);
}

static void	ft_replace(std::string &line, std::string s1, std::string s2)
{
	std::string::size_type	pos;

	pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1, pos + 1);
	}
}

static int	in_error(std::fstream &f1)
{
	if (f1.eof())
	{
		return (1);
	}
	if (f1.fail())
	{
		std::cout << "Error : could not getline correctly" << std::endl;
		f1.clear();
		f1.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (2);
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::fstream	f1;
	std::fstream	f2;
	std::string		s1;
	std::string		s2;
	std::string		line;

	if (ac != 4)
	{
		std::cerr << "You need 3 arguments with this program : a filename and two strings." << std::endl;
		return (1);
	}
	if (!open_files(f1, f2, av))
		return (2);
	s1 = av[2];
	s2 = av[3];
	std::getline(f1, line, '\n');
	while (!line.empty() && !in_error(f1))
	{
		ft_replace(line, s1, s2);
		f2 << line;
		std::getline(f1, line, '\n');
		if (in_error(f1) == 1)
		{
			ft_replace(line, s1, s2);
			f2 << line;
			break ;
		}
	}
	f1.close();
	f2.close();
	return (0);
}