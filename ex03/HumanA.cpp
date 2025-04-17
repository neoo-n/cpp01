/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:14:04 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 22:58:48 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"

HumanA::HumanA(void)
: name(0), weapon(0)
{
	std::cout << "A humanA is created." << std::endl;
}

HumanA::HumanA(std::string n, Weapon w)
: name(n), weapon(w)
{
	std::cout << "A humanA of the name " << n;
	std::cout << " is created with a weapon of type " << w.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "A humanA is dead." << std::endl;
}

std::string	HumanA::getName(void)
{
	return (name);
}

Weapon		HumanA::getWeapon(void)
{
	return (weapon);
}


void		HumanA::setName(std::string n_name)
{
	name = n_name;
}

void		HumanA::setWeapon(Weapon n_weapon)
{
	weapon = n_weapon;
}

void		HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
