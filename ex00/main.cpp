/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:59:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/11 09:23:09 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *Zomb = newZombie("Jimmy");
	randomChump("Louis");
	Zomb->announce();
	delete Zomb;
	return (0);
}