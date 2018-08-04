/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:08:13 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 16:21:08 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50), _Level(1), _MeleeAttackDmg(20), _RangedAttackDmg(15), _ArmorDmgReduction(3), _FirstChallengePoints(10), _SecondChallengePoints(10), _ThirdChallengePoints(10), _FourthChallengePoints(10), _FifthChallengePoints(10) {
	std::cout << "Default ScavTrap Constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50), _Level(1), _MeleeAttackDmg(20), _RangedAttackDmg(15), _ArmorDmgReduction(3), _name(name), _FirstChallengePoints(10), _SecondChallengePoints(10), _ThirdChallengePoints(10), _FourthChallengePoints(10), _FifthChallengePoints(10)  {
	std::cout << "Parameter ScavTrap Constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	*this = src;
	std::cout << "Copy ScavTrap Constructor called." << std::endl;
	return ;
}

std::string	ScavTrap::getName( void ) const {
	return this->_name;
}

void	ScavTrap::setName( std::string name ) {
	this->_name = name;
	return ;
}

ScavTrap	&	ScavTrap::operator=( ScavTrap const & rhs ) {
	this->_name = rhs.getName();
	return *this;
}

unsigned	int	ScavTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDmg << " points of damage !" << std::endl;
	return this->_RangedAttackDmg;
}

unsigned	int	ScavTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDmg << " points of damage !" << std::endl;
	return this->_MeleeAttackDmg;
}

void	ScavTrap::takeDamage( unsigned int amount ) {

	int		points = amount - this->_ArmorDmgReduction;

	if (points > 0) {
		this->_HitPoints -= points;
		if (this->_HitPoints <= 0) {
			std::cout << "FR4G-TP " << this->_name << " receiving " << points << " points of damage ! He have " << this->_HitPoints << " HP so he is dead !" << std::endl;
			return ;
		}
		else
			std::cout << "FR4G-TP " << this->_name << " receiving " << points << " points of damage ! He have " << this->_HitPoints << " HP" << std::endl;
	}
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	
	if (this->_HitPoints + amount > this->_MaxHitPoints) {
		std::cout << "FR4G-TP " << this->_name << " can't repaired more HP" << std::endl;
		return ;
	}
	this->_HitPoints += amount;
	std::cout << "FR4G-TP " << this->_name << " repaired" << amount << " HP ! He have " << this->_HitPoints << " HP" << std::endl;
	return ;
}

unsigned	int	ScavTrap::_FirstChallenge( void ) {
	std::cout << "FR4G-TP " << this->_name << " challenge with 1_CHALLENGE, for " << this->_FirstChallengePoints << " potential points !" << std::endl;
	return this->_FirstChallengePoints;
}

unsigned	int	ScavTrap::_SecondChallenge( void ) {
	std::cout << "FR4G-TP " << this->_name << " challenge with 2_CHALLENGE, for " << this->_SecondChallengePoints << " potential points !" << std::endl;
	return this->_SecondChallengePoints;
}

unsigned	int	ScavTrap::_ThirdChallenge( void ) {
	std::cout << "FR4G-TP " << this->_name << " challenge with 3_CHALLENGE, for " << this->_ThirdChallengePoints << " potential points !" << std::endl;
	return this->_ThirdChallengePoints;
}

unsigned	int	ScavTrap::_FourthChallenge( void ) {
	std::cout << "FR4G-TP " << this->_name << " challenge with 4_CHALLENGE, for " << this->_FourthChallengePoints << " potential points !" << std::endl;
	return this->_FourthChallengePoints;
}

unsigned	int	ScavTrap::_FifthChallenge( void ) {
	std::cout << "FR4G-TP " << this->_name << " challenge with 5_CHALLENGE, for " << this->_FifthChallengePoints << " potential points !" << std::endl;
	return this->_FifthChallengePoints;
}

unsigned	int	ScavTrap::challengeNewcomer( void ) {

	size_t	random = 0;
	unsigned	int	( ScavTrap::*challenge[5] )( void ) = { &ScavTrap::_FirstChallenge, &ScavTrap::_SecondChallenge, &ScavTrap::_ThirdChallenge, &ScavTrap::_FourthChallenge, &ScavTrap::_FifthChallenge };

	random = genRandomNum(0, 5);
	return ( this->*challenge[random] )( );
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap Destructor called." << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, ScavTrap const & rhs ) {
	o << rhs.getName();
	return o;
}
