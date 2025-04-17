/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:33:01 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 12:27:55 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A new zombie is born." << std::endl;
}

Zombie::Zombie(std::string n)
: name(n)
{
	std::cout << "A new zombie is born with the name of " << n << "." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "We are here today to remember the life of " << name << ", the zombie." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (name);
}

void		Zombie::setName(std::string n_name)
{
	name = n_name;
}

void		Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
