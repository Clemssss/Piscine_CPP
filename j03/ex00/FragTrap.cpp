/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:33:02 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 16:57:54 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5), _FirstAttackDmg(40), _SecondAttackDmg(40), _ThirdAttackDmg(40), _FourthAttackDmg(40), _FifthAttackDmg(40) {
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) : _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5), _name(name), _FirstAttackDmg(40), _SecondAttackDmg(40), _ThirdAttackDmg(40), _FourthAttackDmg(40), _FifthAttackDmg(40) {
	std::cout << "Parameter Constructor called." << std::endl;
	return ;
}

std::string	FragTrap::getName( void ) {
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

	if (this->_HitPoints - points <= 0) {
		std::cout << "FR4G-TP " << this->_name << " has 0 HP so he is dead !" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->_name << " receiving " << points << " points of damage ! He have " << this->_HitPoints << " HP" << std::endl;
	return ;
}

void	FragTrap::beRepaired( unsigned int amount ) {
	if (this->_HitPoints + amount > this->_MaxHitPoints) {
		std::cout << "FR4G-TP " << this->_name << " can't repaired more HP" << std::endl;
		return ;
	}
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

	size_t	random;
	unsigned	int	( FragTrap::*attacks[5] )( std::string const & target ) = { &FragTrap::_FirstAttack, &FragTrap::_SecondAttack, &FragTrap::_ThirdAttack, &FragTrap::_FourthAttack, &FragTrap::_FifthAttack };

	std::srand(std::time(nullptr));
	random = genRandomNum(0, 4);
	return ( this->*attacks[random] )( target );
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, FragTrap const & rhs ) {
	o << rhs.getName();
	return o;
}
