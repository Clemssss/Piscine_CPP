/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:41:09 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 10:40:32 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieEvent	{

	public:

		ZombieEvent( void );
		~ZombieEvent( void );

		void 				setZombieType( std::string type );
		Zombie*			newZombie( std::string name );
		void 				randomChump( void );

	private:

		std::string	_type;
};

#endif
