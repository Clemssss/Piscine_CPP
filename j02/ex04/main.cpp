/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 09:14:45 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 11:24:24 by clegirar         ###   ########.fr       */
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
			while (pile[j] && pile[j] != '(') {
				rpn += pile[j];
				rpn += ' ';
				pile.erase(j);
				j--;
			}
			if (pile[j] == '(')
				pile.erase(j);
		}
	}
	std::reverse(pile.begin(), pile.end());
	for (size_t i = 0; i < pile.size(); i++) {
		rpn += pile[i];
		rpn += ' ';
	}
	return rpn;
}

int		nb_operations( std::string rpn ) {
	int		nb = 0;

	for (size_t i = 0; i < rpn.size(); i++ ) {
		if (rpn[i] == ' ')
			nb++;
	}
	return nb;
}

std::string	fill_char( std::string rpn, size_t i ) {

	std::string	ret;
	size_t	j_ret = 0;
	size_t	cmp = 0;
	size_t	j = 0;

	while ( rpn[j] && cmp + 1 != i ) {
		if ( rpn[j] == ' ' )
			cmp++;
		j++;
	}
	while ( rpn[j] && cmp != i ) {
		if ( rpn[j] == ' ' )
			cmp++;
		ret += rpn[j++];
	}
	ret.erase(ret.size() - 1);
	return ret;
}

std::string	*	new_rpn( std::string * rpn, size_t exc_1, size_t exc_2, size_t nb_op ) {

	std::string	*	ret = new std::string[nb_op];
	size_t	j = 0;

	for (size_t i = 0; i < nb_op; i++) {
		if (i != exc_1 && i != exc_2) {
			ret[j++] = rpn[i];
		}
	}
	delete [] rpn;
	return ret;
}

std::string *	resolve_rpn( std::string * rpn, size_t nb_op, size_t global ) {

	for ( size_t i = 0; i < nb_op; i++ ) {
		if (!rpn[i].compare("+")) {
			Fixed		nb1( std::stof(rpn[i - 2]) );
			Fixed		nb2( std::stof(rpn[i - 1]) );
			std::ostringstream	ostr;

			ostr << (nb1 + nb2);
			rpn[i] = ostr.str();
			nb_op -= 2;
		 	rpn = new_rpn( rpn, i - 1, i - 2, global );
			i = 0;
		}
		else if (!rpn[i].compare("-")) {
			Fixed		nb1( std::stof(rpn[i - 2]) );
			Fixed		nb2( std::stof(rpn[i - 1]) );
			std::ostringstream	ostr;

			ostr << (nb1 - nb2);
			rpn[i] = ostr.str();
			nb_op -= 2;
		 	rpn = new_rpn( rpn, i - 1, i - 2, global );
			i = 0;
		}
		else if (!rpn[i].compare("*")) {
			Fixed		nb1( std::stof(rpn[i - 2]) );
			Fixed		nb2( std::stof(rpn[i - 1]) );
			std::ostringstream	ostr;

			ostr << ((rpn[i - 1].find(".") != std::string::npos || rpn[i - 2].find(".") != std::string::npos) ? (nb1 * nb2) : (nb1.toInt() * nb2.toInt()));
			rpn[i] = ostr.str();
			nb_op -= 2;
		 	rpn = new_rpn( rpn, i - 1, i - 2, global );
			i = 0;
		}
		else if (!rpn[i].compare("/")) {
			Fixed		nb1( std::stof(rpn[i - 2]) );
			Fixed		nb2( std::stof(rpn[i - 1]) );

			std::ostringstream	ostr;
			ostr << ((rpn[i - 1].find(".") != std::string::npos || rpn[i - 2].find(".") != std::string::npos) ? (nb1 / nb2) : (nb1.toInt() / nb2.toInt()));
			rpn[i] = ostr.str();
			nb_op -= 2;
		 	rpn = new_rpn( rpn, i - 1, i - 2, global );
			i = 0;
		}
		else if (!rpn[i].compare("%")) {
			Fixed		nb1( std::stof(rpn[i - 2]) );
			Fixed		nb2( std::stof(rpn[i - 1]) );
			std::ostringstream	ostr;

			ostr << (nb1 % nb2);
			rpn[i] = ostr.str();
			nb_op -= 2;
		 	rpn = new_rpn( rpn, i - 1, i - 2, global );
			i = 0;
		}
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
	std::string	rpn = convert_to_rpn( calc );
	size_t	nb_op = nb_operations( rpn );
	std::string	*tab = new std::string[nb_op];
	for ( size_t i = 0; i < nb_op; i++ ) {
		tab[i] = fill_char( rpn, i + 1 );
	}
	tab = resolve_rpn( tab, nb_op, nb_op );
	std::cout << tab[0] << std::endl;
	return 0;
}
