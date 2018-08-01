/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:46:19 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 15:45:29 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	return ;
}

Brain::~Brain( void ) {
	return ;
}

std::string		Brain::identify( void ) const {

	const	void 	*address = static_cast<const void *>(this);
	std::stringstream	sd;

	sd << address;
	return sd.str();
}
