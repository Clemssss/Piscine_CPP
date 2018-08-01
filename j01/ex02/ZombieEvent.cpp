/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:47:49 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 13:33:06 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <time.h>
#include <stdlib.h>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
	return ;
}

ZombieEvent::~ZombieEvent( void ) {
	return ;
}

void 	ZombieEvent::setZombieType( std::string type ) {
	this->_type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie( std::string name ) {
	Zombie*		zombie = new Zombie();

	setZombieType("MALHONNETE !");
	zombie->type = this->_type;
	zombie->name = name;
	return zombie;
}

int		genRandomNum( int a, int b ) {
	srand(time(NULL));
	return rand() % (b - a) + a;
}

std::string	genRandomName( int len ) {
	static	const	char	alpha[] = "abcdefghijklmnopqrstuvwxyz";
	std::string					s;

	std::srand(std::time(nullptr));
	for (int i = 0; i < len; i++) {
		s += alpha[std::rand() % (sizeof(alpha) - 1)];
	}
	return s;
}

void	ZombieEvent::randomChump( void ) {
	Zombie		zombie;

	setZombieType("MALHONNETE !");
	zombie.type = this->_type;
	//zombie.name = "test";
	zombie.name = genRandomName(genRandomNum(3, 11));

	zombie.announce();
	return ;
}
