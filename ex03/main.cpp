/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:36:05 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/14 12:21:52 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

int	main()
{
	Weapon newWeapon;
	std::string club = "CLUB WEAPON";

	newWeapon.setType(club);
	std::cout << newWeapon.getType();
	return 0;
}