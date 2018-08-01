/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:30:44 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 13:48:33 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie	{

	public:

		std::string	type;
		std::string	name;

		Zombie( void );
		~Zombie( void );

		void 				announce( void ) const;
};

#endif
