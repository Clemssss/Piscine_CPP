/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:43:24 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 15:58:18 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human( void ) {
	return ;
}

Human::~Human( void ) {
	return ;
}

std::string	Human::identify( void ) const {
	return this->_brain.identify();
}

const	Brain		&Human::getBrain( void ) const {
	return this->_brain;
}
