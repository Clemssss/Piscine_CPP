/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:39:48 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 18:47:36 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const	int	Fixed::_fBits = 8;

Fixed::Fixed( void ) : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int n ) : _val(n << Fixed::_fBits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float n ) : _val(roundf(n * (1 << Fixed::_fBits))) {
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat( void ) const {
	std::cout << "toFloat member function called" << std::endl;
	return this->_val / (float)(1 << Fixed::_fBits);
}

int		Fixed::toInt( void ) const {
	std::cout << "toInt member function called" << std::endl;
	return this->_val / (1 << Fixed::_fBits);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return o;
}
