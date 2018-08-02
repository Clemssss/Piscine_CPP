/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:39:48 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 15:08:03 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed	&	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void 	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

const	int	Fixed::_fBits = 8;
