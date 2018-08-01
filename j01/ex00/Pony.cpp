/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:04:56 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 09:21:59 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony( std::string fill ) : carac(fill){
	std::cout << "Constructor called !" << std::endl;
	return ;
}

Pony::~Pony( void ) {
	std::cout << "Destructor called !" << std::endl;
	return ;
}
