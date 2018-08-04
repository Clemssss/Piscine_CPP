/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:06:28 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 16:01:16 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "FragTrap.hpp"
# include <iostream>
# include <random>
# include <sstream>
# include <time.h>

class	ScavTrap	{

	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap	&	operator=( ScavTrap const & rhs );

		unsigned	int	rangedAttack( std::string const & target );
		unsigned	int	meleeAttack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		unsigned	int	challengeNewcomer( void );

		std::string	getName( void ) const;
		void	setName( std::string name );

	private:

		int		_HitPoints;
		unsigned	int		_MaxHitPoints;
		int		_EnergyPoints;
		unsigned	int		_MaxEnergyPoints;
		unsigned	int		_Level;
		std::string		_name;
		unsigned	int		_MeleeAttackDmg;
		unsigned	int		_RangedAttackDmg;
		unsigned	int		_ArmorDmgReduction;

		unsigned	int		_FirstChallengePoints;
		unsigned	int		_SecondChallengePoints;
		unsigned	int		_ThirdChallengePoints;
		unsigned	int		_FourthChallengePoints;
		unsigned	int		_FifthChallengePoints;

		unsigned	int	_FirstChallenge( void );
		unsigned	int	_SecondChallenge( void );
		unsigned	int	_ThirdChallenge( void );
		unsigned	int	_FourthChallenge( void );
		unsigned	int	_FifthChallenge( void );
		
};

std::ostream	&	operator<<( std::ostream & o, ScavTrap const & rhs );

#endif
