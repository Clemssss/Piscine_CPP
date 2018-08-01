/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 09:43:04 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 10:29:30 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <time.h>
# include <iostream>
# include <sstream>
# include <fstream>
# include <ctime>

class	Logger	{

	public:

		Logger( std::string const & file );
		~Logger( void );

		void 	log( std::string const & dest, std::string const & message );

	private:

		static	int		_nbLog;
		std::string	const	_file;
		void 	_logToConsole( std::string message );
		void 	_logToFile( std::string message );
		std::string	_makeLogEntry( std::string message );

};

#endif
