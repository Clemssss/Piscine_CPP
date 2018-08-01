/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:24:00 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 09:25:57 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void 	memoryLeak( void ) {
	std::string*		panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
	return ;
}
