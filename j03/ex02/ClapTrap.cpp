/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 15:49:33 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 17:22:44 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Default ClapTrap Constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	std::cout << "Copy ClapTrap Constructor called." << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "Parameter ClapTrap Constructor called." << std::endl;
	FragTrap::setName( name );
	ScavTrap::setName( name );
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Destructor called." << std::endl;
	return ;
}

std::ostream	& 	operator<<( std::ostream & o, ClapTrap const & rhs ) {
	o << rhs.FragTrap::getName();
	return o;
}
