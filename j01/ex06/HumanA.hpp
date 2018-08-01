/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:55:48 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 17:35:06 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA	{

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void 	attack( void );

	private:

		std::string	_name;
		Weapon			*_weapon;

};

#endif
