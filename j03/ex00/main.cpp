/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:31:23 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 16:57:55 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int		main( void ) {
	FragTrap	Player1("Player1");
	FragTrap	Player2("Player 2");

	Player2.takeDamage(Player1.rangedAttack(Player2.getName()));
	return 0;
}
