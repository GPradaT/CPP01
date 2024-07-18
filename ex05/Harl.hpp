/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:24:38 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/18 08:48:58 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define INFO "INFO: I love to learn from knowledge and experience from others"
# define DEBUG "DEBUG: I love having extra bacon for my burguer"
# define WARNING "WARNING: I shouldn't have eaten that much"
# define ERROR "FATAL ERROR: I'm going to die... or maybe not"

# include <string>
# include <iostream>

class Harl
{
	public:

		Harl();
		~Harl();
		void			complain(std::string level);

	private:

		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		typedef void	(Harl::*functionPtr)(void);

		std::string		level[4];
		functionPtr		func[4];
};


#endif
