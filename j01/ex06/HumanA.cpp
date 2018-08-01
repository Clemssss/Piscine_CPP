/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:03:20 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 17:34:38 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(&weapon) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void 	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
