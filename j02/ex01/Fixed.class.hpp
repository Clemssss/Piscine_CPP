/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:19:28 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 15:37:23 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <math.h>

class	Fixed	{

	public:

		Fixed( void );
		Fixed( const int n );
		Fixed( const float n);
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed	&		operator=( Fixed const & rhs );

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
