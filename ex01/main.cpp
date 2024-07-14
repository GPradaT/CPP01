/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:59:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/14 11:06:41 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int			nZombies = 7;
	std::string	name = "Guillem";
	Zombie	*horde = zombieHorde(nZombies, name);

	for (int i = 0; i < 7; ++i)
		horde[i].announce();
	delete [] horde;
	return (0);
}