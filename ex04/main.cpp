/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:11:17 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/18 13:13:22 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You need 3 arguments with this program : a filename and two strings." << std::endl;
		return (1);
	}
	return (0);
}