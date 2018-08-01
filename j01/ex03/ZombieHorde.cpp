/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:04:26 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 14:24:59 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "ZombieHorde.hpp"

int		genRandomNum( int a, int b ) {
	return std::rand() % (b - a) + a;
}

std::string	genRandomName( int len ) {
	static	const	char	alpha[] = "abcdefghijklmnopqrstuvwxyz";
	std::string					s;

	for (int i = 0; i < len; i++) {
		s += alpha[std::rand() % (sizeof(alpha) - 1)];
	}
	return s;
}

ZombieHorde::ZombieHorde( int n ) : _n(n) {

	this->horde = new Zombie[n];

	std::srand(std::time(nullptr));
	for (int i = 0; i < n; i++) {
		this->horde[i].type = "MALHONNETE !";
		this->horde[i].name = genRandomName(genRandomNum(3, 11));
	}
	return ;
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] this->horde;
	return ;
}

void 	ZombieHorde::announce( void ) const {
	for (int i = 0; i < this->_n; i++) {
		this->horde[i].announce();
	}
}
