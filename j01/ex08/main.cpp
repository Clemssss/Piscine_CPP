/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:28:12 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 09:39:29 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main( void ) {
	Human	Bob, Jim;

	Bob.action("meleeAttack", "Bob");
	Jim.action("rangedAttack", "Jim");
	Bob.action("intimidatingShout", "Bob");
	Jim.action("intimidatingShout", "Jim");
	return 0;
}
