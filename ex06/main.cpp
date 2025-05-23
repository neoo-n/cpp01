/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:19:49 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/05 14:38:03 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "not valid number of arguments : you must have two" << std::endl;
		return (1);
	}
	Harl harl;
	std::string level = av[1];

	harl.complain(level);
	return (0);
}