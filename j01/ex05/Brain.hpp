/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:34:49 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/31 15:44:28 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iostream>
# include <string>
# include <iostream>

class	Brain	{

	public:

		Brain( void );
		~Brain( void );

		std::string 	identify( void ) const;

};

#endif
