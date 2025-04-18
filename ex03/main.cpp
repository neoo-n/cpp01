/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:12:38 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/18 12:18:56 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << "--------- HumanA ---------------" << std::endl;
	Weapon	w1("sword");
	HumanA	h1("Kinomoto", w1);
	HumanA	h2("Kero", w1);
	h1.attack();
	h2.attack();

	std::cout << std::endl << "--------- HumanB ---------------" << std::endl;
	Weapon	w2("katana");
	HumanB	h3("Sakura");
	h3.setWeapon(w2);
	h3.attack();

	std::cout << std::endl << "------------ END -----------------" << std::endl;
	return (0);
}