/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:19:28 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 20:10:47 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class	Fixed	{

	public:

		Fixed( void );
		Fixed( const int n );
		Fixed( const float n);
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed	&		operator=( Fixed const & rhs );
		Fixed			operator+( Fixed const & rhs ) const;
		Fixed			operator-( Fixed const & rhs ) const;
		Fixed			operator/( Fixed const & rhs ) const;
		Fixed			operator*( Fixed const & rhs ) const;

		Fixed			operator++( int n );
		Fixed			operator--( int n );
		Fixed	&		operator++( void );
		Fixed	&		operator--( void );

		bool			operator==( Fixed const & n ) const;
		bool			operator!=( Fixed const & n ) const;
		bool			operator>( Fixed const & n ) const;
		bool			operator<( Fixed const & n ) const;
		bool			operator>=( Fixed const & n ) const;
		bool			operator<=( Fixed const & n ) const;

		static	Fixed	&	min( Fixed & c1, Fixed & c2 );
		static	Fixed	const	&	min( Fixed const & c1, Fixed const & c2);
		static	Fixed	&	max( Fixed & c1, Fixed & c2 );
		static	Fixed	const	&	max( Fixed const & c1, Fixed const & c2);

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int		_val;
		static	const	int	_fBits;
};

std::ostream	&	operator<<( std::ostream & o, Fixed const & rhs );

#endif
