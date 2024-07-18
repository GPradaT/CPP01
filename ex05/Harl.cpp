/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:31:50 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/18 08:47:44 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

Harl::Harl()
{
	this->level[0] = "INFO";
	this->level[1] = "DEBUG";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
	this->func[0] = &Harl::info;
	this->func[1] = &Harl::debug;
	this->func[2] = &Harl::warning;
	this->func[3] = &Harl::error;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->level[i])
			(this->*func[i])();
	}
}
