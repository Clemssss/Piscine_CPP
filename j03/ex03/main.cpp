/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:31:23 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 18:05:10 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
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

	ScavTrap	test1("test 1");
	ScavTrap	test2("test 2");

	test2.takeDamage(test1.rangedAttack(test2.getName()));
	test1.takeDamage(test2.meleeAttack(test1.getName()));
	test1.challengeNewcomer();
	test2.challengeNewcomer();

	ClapTrap	clap1("clap 1");
	ClapTrap	clap2("clap 2");

	std::cout << clap1 << " && " << clap2 << std::endl;
	return 0;
}
