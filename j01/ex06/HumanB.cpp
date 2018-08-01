/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:14:32 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 17:19:20 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void 	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}

void 	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
