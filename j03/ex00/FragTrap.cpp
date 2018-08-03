/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:33:02 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/03 16:06:00 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _Hitpoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5) {
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) : _Hitpoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDmg(30), _RangedAttackDmg(20), _ArmorDmgReduction(5), _name(name) {
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

void	FragTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDmg - this->_ArmorDmgReduction << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDmg << " points of damage !" << std::endl;
	return ;
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

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, FlagTrap const & rhs ) {
	o << rhs.getName();
	return o;
}
