/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:04:34 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 09:22:17 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void 	ponyOnTheHeap( void ) {
	Pony*		heap = new Pony("Belle et rose");

	std::cout << heap->carac << std::endl;
	delete heap;
	return ;
}

void 	ponyOnTheStack( void ) {
	Pony		stack = Pony("Moche et violette");

	std::cout << stack.carac << std::endl;
	return ;
}

int		main( void ) {

	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
