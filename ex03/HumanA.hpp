/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:13:57 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 19:41:18 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanA(void);
		HumanA(std::string n, Weapon w);
		~HumanA(void);
		
		std::string	getName(void);
		Weapon		getWeapon(void);
		void		setName(std::string n_name);
		void		setWeapon(Weapon n_weapon);

		void		attack(void);

};

#endif