/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:13:43 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 19:04:19 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string s);
		~Weapon(void);
		std::string	getType(void);
		void		setType(std::string n_type);
};
#endif