/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 09:14:45 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/02 12:40:42 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int		check_calc( std::string calc ) {

	for (size_t i = 0; i < calc.size(); i++) {
		if (!isdigit(calc[i]) && calc[i] != '-' && calc[i] != '+' && calc[i] != '*' && calc[i] != '/' && calc[i] != '%' && calc[i] != '(' && calc[i] != ')'
			&& calc[i] != '.' && calc[i] != ' ' && calc[i] != '\t')
			return 0;
	}
	return 1;
}

std::string 	convert_to_rpn( std::string calc ) {

	std::string	pile;
	std::string	rpn;
	size_t	j = 0;

	for (size_t i = 0; i < calc.size(); i++) {
		if (isdigit(calc[i]) || calc[i] == '.')
		{
			while (calc[i] && (isdigit(calc[i]) || calc[i] == '.'))
				rpn += calc[i++];
			i--;
			rpn += ' ';
		}
		else if (calc[i] == '(')
			pile += calc[i];
		else if (calc[i] == '-' || calc[i] == '+' || calc[i] == '*' || calc[i] == '/' || calc[i] == '%') {
			if (pile.size() == 0)
				pile += calc[i];
			else if (pile[pile.size() - 1] == '(')
				pile += calc[i];
			else if ((calc[i] == '/' || calc[i] == '*' || calc[i] == '%') && (pile[pile.size() - 1] == '-' || pile[pile.size() - 1] == '+'))
				pile += calc[i];
			else {
				rpn += pile[pile.size() - 1];
				rpn += ' ';
				pile.erase(pile.size() - 1);
				pile += calc[i];
			}
		}
		else if (calc[i] == ')') {
			j = pile.size() - 1;
			std::cout << "heeere" << std::endl;
			while (pile[j] && pile[j] != '(') {
				rpn += pile[j];
				rpn += ' ';
				pile.erase(j);
				j--;
			}
			if (pile[j] == '(')
				pile.erase(j);
		}
		std::cout << "calc[" << i << "] : [" << calc[i] << "] &&  pile : [" << pile << "] && rpn : [" << rpn << "]" << std::endl;
	}
	std::reverse(pile.begin(), pile.end());
	for (size_t i = 0; i < pile.size(); i++) {
		rpn += pile[i];
		rpn += ' ';
	}
	return rpn;
}

int		main( int ac, char **av ) {

	if (ac != 2) {
		std::cout << "usage: ./eval_expr [calcul]" << std::endl;
		exit(1);
	}
	std::string		calc( av[1] );
	if (!check_calc( calc )) {
		std::cout << "Invalid calcul." << std::endl;
		exit(1);
	}
	std::cout << calc << std::endl;
	std::string	rpn = convert_to_rpn( calc );
	std::cout << "rpn : " << rpn << std::endl;

	return 0;
}
