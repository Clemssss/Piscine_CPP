/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:31:23 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 11:51:31 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int		main( void ) {
	FragTrap	Player1("Player 1");
	FragTrap	Player2("Player 2");

	std::srand(std::time(nullptr));
	Player2.takeDamage(Player1.rangedAttack(Player2.getName()));
	Player1.takeDamage(Player2.vaulthunter_dot_exe(Player1.getName()));
	Player1.takeDamage(Player2.meleeAttack(Player1.getName()));
	Player1.takeDamage(Player2.vaulthunter_dot_exe(Player1.getName()));
	Player1.takeDamage(Player2.vaulthunter_dot_exe(Player1.getName()));
	Player1.takeDamage(Player2.vaulthunter_dot_exe(Player1.getName()));
	Player1.takeDamage(Player2.vaulthunter_dot_exe(Player1.getName()));
	return 0;
}
