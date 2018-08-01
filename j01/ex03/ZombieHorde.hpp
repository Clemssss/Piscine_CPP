/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:49:12 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 14:14:14 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde	{

	public:

		Zombie*		horde;

		ZombieHorde( int n );
		~ZombieHorde( void );

		void 			announce( void ) const;

	private:

		int				_n;
};

#endif
