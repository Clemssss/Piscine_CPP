/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:19:28 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 15:01:36 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class	Fixed	{

	public:

		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed	&		operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );

	private:

		int		_val;
		static	const	int	_fBits;
};

#endif
