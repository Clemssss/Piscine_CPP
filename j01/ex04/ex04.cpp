/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:26:34 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 14:30:53 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {
	std::string		s;
	std::string*	p_s = &s;
	std::string&	r_s = s;

	s = "coucoy";
	std::cout << "s : " << s << std::endl;
	std::cout << "p_s : " << *p_s << std::endl;
	std::cout << "r_s : " << r_s << std::endl;
	return 0;
}
