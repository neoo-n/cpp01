/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:13:46 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/18 12:18:13 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

Weapon::Weapon(void)
: type(0)
{
	std::cout << "A weapon is created." << std::endl;
}

Weapon::Weapon(std::string n_type)
: type(n_type)
{
	std::cout << "A " << n_type << " is created." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "A weapon (" << type << ") is destroyed." << std::endl;
}

std::string	Weapon::getType(void)
{
	return (type);
}

void		Weapon::setType(std::string s)
{
	type = s;
}
