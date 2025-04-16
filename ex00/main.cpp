/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:34:48 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/16 16:19:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "------------ Zombie allocated -------------" << std::endl;
	Zombie*	z3 = newZombie("Yerloche");
	Zombie*	z4 = newZombie("Bertrand");
	z3->announce();
	z4->announce();
	delete(z3);
	delete(z4);

	std::cout << std::endl << "-------------- Random Chump ---------------" << std::endl;
	randomChump("Zélyna");
	randomChump("André-Baptiste-Jean");
	randomChump("C3PO");

	std::cout << std::endl << "--------------- New Zombie ---------------" << std::endl;
	Zombie	z1("Alfred");
	Zombie	z2("Caroline");
	z1.announce();
	z2.announce();
	return (0);
}