/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:29:06 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 18:18:11 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif