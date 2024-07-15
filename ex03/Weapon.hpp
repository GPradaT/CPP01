/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:35:21 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/15 12:21:30 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void		setType(std::string type);

		const std::string&	getType() const;

	private:
		std::string type;
};

#endif