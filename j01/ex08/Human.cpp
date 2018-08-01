/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:28:37 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 09:38:25 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void 	Human::meleeAttack( std::string const & target ) {
	std::cout << target << " Attack Melee !" << std::endl;
	return ;
}

void 	Human::rangedAttack( std::string const & target ) {
	std::cout << target << " Ranged Attack !" << std::endl;
	return ;
}

void 	Human::intimidatingShout( std::string const & target ) {
	std::cout << target << " Intimidating Shout !" << std::endl;
	return ;
}

void 	Human::action( std::string const & action_name, std::string const & target ) {
	std::string		action_attack[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void 	(Human::*attacks[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; i++) {
		if (action_name == action_attack[i])
			(this->*attacks[i])(target);
	}
	return ;
}
