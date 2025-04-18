/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:12:38 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/18 12:27:56 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << "------------- TEST A --------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl << "------------- TEST B --------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	std::cout << std::endl << "------------ MY TEST --------------" << std::endl;
	std::cout << "------------ HumanA ---------------" << std::endl;
	Weapon	w1("sword");
	HumanA	h1("Kinomoto", w1);
	HumanA	h2("Kero", w1);
	h1.attack();
	h2.attack();

	std::cout << std::endl << "------------ HumanB ---------------" << std::endl;
	Weapon	w2("katana");
	HumanB	h3("Sakura");
	h3.setWeapon(w2);
	h3.attack();

	std::cout << std::endl << "------------- END -----------------" << std::endl;
	return (0);
}