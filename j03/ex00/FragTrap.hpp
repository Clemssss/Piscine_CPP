/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:31:43 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 16:57:56 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <random>
# include <sstream>

class	FragTrap	{

	public:

		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap	&	operator=( FragTrap const & rhs );

		unsigned	int	rangedAttack( std::string const & target );
		unsigned	int	meleeAttack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		unsigned	int	vaulthunter_dot_exe( std::string const & target );

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

		unsigned	int		_FirstAttackDmg;
		unsigned	int		_SecondAttackDmg;
		unsigned	int		_ThirdAttackDmg;
		unsigned	int		_FourthAttackDmg;
		unsigned	int		_FifthAttackDmg;

		unsigned	int	_FirstAttack( std::string const & target );
		unsigned	int	_SecondAttack( std::string const & target );
		unsigned	int	_ThirdAttack( std::string const & target );
		unsigned	int	_FourthAttack( std::string const & target );
		unsigned	int	_FifthAttack( std::string const & target );
		
};

std::ostream	&	operator<<( std::ostream & o, FragTrap const & rhs );

#endif
