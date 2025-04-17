/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:13:50 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 22:46:56 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanB(void);
		HumanB(std::string n);
		~HumanB(void);
		
		std::string	getName(void);
		Weapon		getWeapon(void);
		void		setName(std::string n_name);
		void		setWeapon(Weapon n_weapon);

		void		attack(void);

};

#endif