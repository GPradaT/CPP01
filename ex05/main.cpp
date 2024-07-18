/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:24:45 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/18 08:52:26 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 1)
	{
		std::cout << "Usage: " << argv[0] << std::endl;
		return (1);
	}
	while (std::cin.good())
	{
		std::cout << "Enter a level: ";
		std::string level;
		std::getline(std::cin, level);
		if (std::cin.eof() || level == "EXIT")
			break ;
		harl.complain(level);
	}
	return (0);
}
