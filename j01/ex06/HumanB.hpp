/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:55:48 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 17:14:30 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB	{

	public:

		HumanB( std::string name );
		~HumanB( void );

		void 	setWeapon( Weapon &weapon );
		void 	attack( void );

	private:

		std::string	_name;
		Weapon			*_weapon;

};

#endif
