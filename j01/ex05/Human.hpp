/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:39:36 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 15:58:23 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <sstream>
# include <iostream>
# include <string>
# include "Brain.hpp"

class	Human	{

	public:

		Human( void );
		~Human( void );

		std::string 	identify( void ) const;
		const	Brain					&getBrain( void ) const;

	private:

		Brain					_brain;

};

#endif
