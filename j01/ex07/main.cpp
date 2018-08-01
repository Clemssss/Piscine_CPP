/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:44:01 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 10:06:01 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

int		main( int ac, char **av ) {

	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
		std::cout << "usage: ./replace filename s1 s2" << std::endl;
	else {
		std::string			file(av[1]);
		std::string			s1(av[2]);
		std::string			s2(av[3]);
		std::ifstream		ifs(file);

		if (!ifs.is_open()) {
			std::cout << "Can't read the file." << std::endl;
			exit(1);
		}
		std::stringstream	buffer;
		buffer << ifs.rdbuf();
		std::string		text = buffer.str();

		std::string		from(av[2]);
		std::string		to(av[3]);
		for (size_t i = 0; (i = text.find(from, i)) != std::string::npos; i += to.length()) {
			text.replace(i, from.length(), to);
		}

		std::ofstream	myfile;
		myfile.open(file + ".replace");
		if (!myfile.is_open()) {
			std::cout << "Can't write to the file." << std::endl;
			exit(1);
		}
		myfile << text;
		myfile.close();
	}
	return 0;
}
