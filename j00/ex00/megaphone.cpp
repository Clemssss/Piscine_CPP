/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 18:01:38 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/30 18:23:13 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	ft_toupper(std::string str)
{
	std::string	ret;

	for (unsigned long i = 0; i < str.size(); ++i)
		ret += toupper(str[i]);
	return (ret);
}

int		main(int ac, char **av)
{
	int		i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (av[++i])
			std::cout << ft_toupper(av[i]);
	std::cout << std::endl;
	return (0);
}
