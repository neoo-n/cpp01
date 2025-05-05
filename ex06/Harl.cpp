/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:07:11 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/24 11:20:35 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "A Harl has been created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "A Harl has been destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "DEBUG :" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years, whereas you started working ";
	std::cout << "here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR:" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int			n = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			n = i;
			break ;
		}
	}

	switch (n)
	{
		case 0:
			(this->*fct[0])();
			//fallthrough
		case 1:
			(this->*fct[1])();
			//fallthrough
		case 2:
			(this->*fct[2])();
			//fallthrough
		case 3:
			(this->*fct[3])();
			//fallthrough
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}