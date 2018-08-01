/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 09:40:46 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 10:36:01 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int		main( void ) {
	Logger	log("test.txt");

	log.log("Console", "Test");
	log.log("File", "On check le file");
	log.log("Console", "Test2");
	log.log("File", "On check le file une seconde fois");
	return 0;
}
