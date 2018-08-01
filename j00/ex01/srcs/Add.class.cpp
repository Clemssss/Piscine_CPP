/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 19:51:18 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/30 21:42:19 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Add.class.hpp"

Add::Add( void ) {
	//std::cout << "AddConstructor called !" << std::endl;
	return ;
}

Add::~Add( void ) {
	//std::cout << "AddDestructor called !" << std::endl;
	return ;
}

void 	Add::AddContact( int *ind ) {
	//std::cout << "AddContact called !" << std::endl;
	this->index = *ind + 1;
	*ind += 1;
	std::cout << "First_name: ";
	std::cin >> this->first_name;
	std::cout << "Last_name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Login: ";
	std::cin >> this->_login;
	return ;
}
