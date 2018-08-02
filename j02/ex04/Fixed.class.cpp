/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:39:48 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/02 09:34:17 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const	int	Fixed::_fBits = 8;

Fixed::Fixed( void ) : _val(0) {
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int n ) : _val(n << Fixed::_fBits) {
	//std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float n ) : _val(roundf(n * (1 << Fixed::_fBits))) {
	//std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed		Fixed::operator++( int ) {
	Fixed		tmp(*this);

	++(*this);
	return tmp;
}

Fixed	&	Fixed::operator++( void ) {
	this->_val++;
	return *this;
}

Fixed		Fixed::operator--( int ) {
	Fixed		tmp(*this);

	--(*this);
	return tmp;
}

Fixed	&	Fixed::operator--( void ) {
	this->_val--;
	return *this;
}

bool		Fixed::operator==( Fixed const & n ) const {
	return this->_val == n.getRawBits();
}

bool		Fixed::operator!=( Fixed const & n ) const {
	return this->_val != n.getRawBits();
}

bool		Fixed::operator>( Fixed const & n ) const {
	return this->_val > n.getRawBits();
}

bool		Fixed::operator<( Fixed const & n ) const {
	return this->_val < n.getRawBits();
}

bool		Fixed::operator>=( Fixed const & n ) const {
	return this->_val >= n.getRawBits();
}

bool		Fixed::operator<=( Fixed const & n ) const {
	return this->_val <= n.getRawBits();
}

Fixed		Fixed::operator+( Fixed const & rhs ) const {
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed		Fixed::operator-( Fixed const & rhs ) const {
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed		Fixed::operator/( Fixed const & rhs ) const {
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed		Fixed::operator*( Fixed const & rhs ) const {
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	&	Fixed::operator=( Fixed const & rhs ) {
	//std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void 	Fixed::setRawBits( int const raw ) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	//std::cout << "toFloat member function called" << std::endl;
	return this->_val / (float)(1 << Fixed::_fBits);
}

int		Fixed::toInt( void ) const {
	//std::cout << "toInt member function called" << std::endl;
	return this->_val / (1 << Fixed::_fBits);
}

Fixed		&	Fixed::min( Fixed & c1, Fixed & c2 ) {
	return (c1 < c2) ? c1 : c2;
}

Fixed		const	&	Fixed::min( Fixed const & c1, Fixed const & c2 ) {
	return (c1 < c2) ? c1 : c2;
}

Fixed		&	Fixed::max( Fixed & c1, Fixed & c2 ) {
	return (c1 > c2) ? c1 : c2;
}

Fixed		const	&	Fixed::max( Fixed const & c1, Fixed const & c2 ) {
	return (c1 > c2) ? c1 : c2;
}

Fixed::~Fixed( void ) {
	//std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream	&	operator<<( std::ostream & o, Fixed const & rhs ) {
	//std::cout << "Operator << called" << std::endl;
	o << rhs.toFloat();
	return o;
}
