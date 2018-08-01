/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 19:18:21 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/30 21:51:58 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Add.class.hpp"

void 	SearchContact( Add *inst_add ) {
	for (int y = 0; y < 4; ++y) {
		if (y == 0)
			std::cout << "index      | ";
		else if (y == 1)
			std::cout << "first_name | ";
		else if (y == 2)
			std::cout << "last_name  | ";
		else if (y == 3)
			std::cout << "nickname   | ";
		for (int x = 0; inst_add[x].index; ++x) {
			if (y == 0)
				std::cout << inst_add[x].index << " , ";
			else if (y == 1)
				std::cout << inst_add[x].first_name << " , ";
			else if (y == 2)
				std::cout << inst_add[x].last_name << " , ";
			else if (y == 3)
				std::cout << inst_add[x].nickname << " , ";
		}
		std::cout << std::endl;
	}
	return ;
}

int		main( void ) {

	Add					inst_add[8];
	int					add_i;
	std::string	buff;

	add_i = 0;
	while (buff.compare("EXIT") != 0)
	{
		buff.clear();
		std::cout << "Command: ";
		std::cin >> buff;
		if (buff.compare("ADD") == 0 && add_i < 8)
			inst_add[add_i].AddContact(&add_i);
		else if (buff.compare("ADD") == 0 && add_i >= 8)
			std::cout << "The PhoneBook can't contain more than 8 contacts !" << std::endl;
		else if (buff.compare("SEARCH") == 0)
			SearchContact(inst_add);
	}
	return (0);
}
