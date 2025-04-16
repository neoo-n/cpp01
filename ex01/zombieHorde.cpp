/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:04:33 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/16 18:05:50 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i = 0;
	std::cout << "help" << std::endl;
	Zombie	*zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i] = Zombie(name);
		i++;
	}
	return (zombies);
}