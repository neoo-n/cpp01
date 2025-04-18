/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:13:53 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/18 12:16:54 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"

HumanB::HumanB(void)
: name(0), weapon(0)
{
	std::cout << "A humanB is created." << std::endl;
}

HumanB::HumanB(std::string n)
: name(n), weapon(0)
{
	std::cout << "A humanB of the name " << n << " is created." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "A humanB (" << name << ") is dead." << std::endl;
}

std::string	HumanB::getName(void)
{
	return (name);
}

Weapon		HumanB::getWeapon(void)
{
	return (*weapon);
}


void		HumanB::setName(std::string n_name)
{
	name = n_name;
}

void		HumanB::setWeapon(Weapon &n_weapon)
{
	weapon = &n_weapon;
}

void		HumanB::attack(void)
{
	std::cout << name << " attacks with ";
	if (weapon)
		std::cout << "their " <<  weapon->getType() << std::endl;
	else
		std::cout << "nothing" << std::endl;
}
