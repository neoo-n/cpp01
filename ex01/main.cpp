/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:32:55 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 11:48:01 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "------------------------ 0 zombie ---------------------------" << std::endl;
	Zombie	*z1 = zombieHorde(0, "Clément");
	if (!z1)
		std::cout << "There is no zombie in this horde." << std::endl;
	else
		delete[](z1);

	std::cout << std::endl << "---------------------- 1 zombie -------------------------" << std::endl;
	Zombie	*z2 = zombieHorde(1, "Tristan");
	if (z2)
		z2[0].announce();
	delete[](z2);

	std::cout << std::endl << "----------------------- 5 zombies -------------------------" << std::endl;
	Zombie	*z3 = zombieHorde(5, "Chappelinette");
	if (z3)
	{
		z3[0].announce();
		z3[1].announce();
		z3[2].announce();
		z3[3].announce();
		z3[4].announce();
	}
	delete[](z3);

	return (0);
}