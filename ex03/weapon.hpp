/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:35:21 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/14 11:43:48 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	public:
		Weapon();
		~Weapon();
		void		setType(std::string &name);
		std::string	&getType() const;

	private:
		std::string type;
}

#endif