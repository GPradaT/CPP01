/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:47:50 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/15 11:03:55 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << name << " destroyed." << std::endl;
}

void	HumanB::attack() const
{
	if (this->weapon == NULL)
	{
		std::cout << name << " is unnarmed, is not possible to use the weapon." << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &armed)
{
	weapon = &armed;
}