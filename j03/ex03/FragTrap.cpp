/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:33:02 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/04 16:19:24 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5), _FirstAttackDmg(40), _SecondAttackDmg(40), _ThirdAttackDmg(40), _FourthAttackDmg(40), _FifthAttackDmg(40), _CostVaulthunter(25) {
	std::cout << "Default FragTrap Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5), _name(name), _FirstAttackDmg(40), _SecondAttackDmg(40), _ThirdAttackDmg(40), _FourthAttackDmg(40), _FifthAttackDmg(40), _CostVaulthunter(25) {
	std::cout << "Parameter FragTrap Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) {
	std::cout << "Copy FragTrap Constructor called." << std::endl;
	*this = src;
	return ;
}

std::string	FragTrap::getName( void ) const {
	return this->_name;
}

void	FragTrap::setName( std::string name ) {
	this->_name = name;
	return ;
}

FragTrap	&	FragTrap::operator=( FragTrap const & rhs ) {
	this->_name = rhs.getName();
	return *this;
}

unsigned	int	FragTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDmg << " points of damage !" << std::endl;
	return this->_RangedAttackDmg;
}

unsigned	int	FragTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDmg << " points of damage !" << std::endl;
	return this->_MeleeAttackDmg;
}

void	FragTrap::takeDamage( unsigned int amount ) {

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

void	FragTrap::beRepaired( unsigned int amount ) {
	
	if (this->_HitPoints + amount > this->_MaxHitPoints) {
		std::cout << "FR4G-TP " << this->_name << " can't repaired more HP" << std::endl;
		return ;
	}
	this->_HitPoints += amount;
	std::cout << "FR4G-TP " << this->_name << " repaired" << amount << " HP ! He have " << this->_HitPoints << " HP" << std::endl;
	return ;
}

unsigned	int	FragTrap::_FirstAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with 1_ATTACK, causing " << this->_FirstAttackDmg << " points of damage !" << std::endl;
	return this->_FirstAttackDmg;
}

unsigned	int	FragTrap::_SecondAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with 2_ATTACK, causing " << this->_SecondAttackDmg << " points of damage !" << std::endl;
	return this->_SecondAttackDmg;
}

unsigned	int	FragTrap::_ThirdAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with 3_ATTACK, causing " << this->_ThirdAttackDmg << " points of damage !" << std::endl;
	return this->_ThirdAttackDmg;
}

unsigned	int	FragTrap::_FourthAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with 4_ATTACK, causing " << this->_FourthAttackDmg << " points of damage !" << std::endl;
	return this->_FourthAttackDmg;
}

unsigned	int	FragTrap::_FifthAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with 5_ATTACK, causing " << this->_FifthAttackDmg << " points of damage !" << std::endl;
	return this->_FifthAttackDmg;
}

size_t	genRandomNum( int a, int b ) {
	return std::rand() % (b - a) + a;
}

unsigned	int	FragTrap::vaulthunter_dot_exe( std::string const & target ) {

	size_t	random = 0;
	unsigned	int	( FragTrap::*attacks[5] )( std::string const & target ) = { &FragTrap::_FirstAttack, &FragTrap::_SecondAttack, &FragTrap::_ThirdAttack, &FragTrap::_FourthAttack, &FragTrap::_FifthAttack };

	if (this->_EnergyPoints - this->_CostVaulthunter > 0)
	{
		this->_EnergyPoints -= this->_CostVaulthunter;
		random = genRandomNum(0, 5);
		return ( this->*attacks[random] )( target );
	}
	std::cout << "FR4G-TP " << this->_name << " can't attack because he don't have enough points !" << std::endl;
	return 0;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Destructor called." << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, FragTrap const & rhs ) {
	o << rhs.getName();
	return o;
}
