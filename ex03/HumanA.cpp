/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:26:46 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/15 13:56:55 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &toAttack)
{
	if (&toAttack == NULL)
		this->weapon->setType("");
	this->name = name;
	weapon = &toAttack;
}

HumanA::~HumanA()
{
	std::cout << name << " destroyed." << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
