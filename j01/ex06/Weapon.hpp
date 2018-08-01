/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:33:13 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 17:35:00 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon	{
	public:

		Weapon( std::string type );
		~Weapon( void );

		void 	setType( std::string fill_type );
		const	std::string	&getType( void );

	private:

		std::string	_type;
};

#endif
