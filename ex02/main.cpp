/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:54:16 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/17 18:11:12 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

int	main(void)
{
	std::string	brain("HI THIS IS BRAIN");

	std::string *stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "The address of : " << std::endl;
	std::cout << "Brain : " << &brain << std::endl;
	std::cout << "StringPTR : " << stringPTR << std::endl;
	std::cout << "StringREF : " << &stringREF << std::endl;

	std::cout << std::endl << "The value of : " << std::endl;
	std::cout << "Brain : " << brain << std::endl;
	std::cout << "StringPTR : " << *stringPTR << std::endl;
	std::cout << "StringREF : " << stringREF << std::endl;
	return (0);
}