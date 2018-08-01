/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:29:53 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 13:48:23 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

int		main( void ) {
	ZombieEvent		event;
	Zombie*				zombie;

	event.randomChump();
	zombie = event.newZombie( "bnosr" cd);
	zombie->announce();
	delete zombie;
	return 0;
}
