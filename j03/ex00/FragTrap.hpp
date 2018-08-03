/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:31:43 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 16:05:47 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

class	FlagTrap	{

	public:

		FlagTrap( void );
		FlagTrap( std::string name );
		~FlagTrap( void );

		Fixed	&	operator=( Fixed const & rhs );

		void	rangedAttack( std::string const & target );
		void	meleeAttack( std:string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		std::string	getName( void );
		void	setName( std::string name );

	private:

		unsigned	int		_HitPoints;
		unsigned	int		_MaxHitPoints;
		unsigned	int		_EnergyPoints;
		unsigned	int		_MaxEnergyPoints;
		unsigned	int		_Level;
		std::string		_name;
		unsigned	int		_MeleeAttackDmg;
		unsigned	int		_RangedAttackDmg;
		unsigned	int		_ArmorDmgReduction;
		
};

std::ostream	&	operator<<( std::ostream & o, FlagTrap const & rhs );

#endif
