/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:29:06 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/16 17:34:43 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

# include <iostream>

class Zombie
{
	private:
		std::string	name;
		
	public:
		Zombie(void);
		Zombie(std::string n);
		~Zombie(void);
		std::string	getName(void);
		void		setName(std::string n_name);
		void		announce(void);
};

Zombie* zombieHorde(int N, std::string name);