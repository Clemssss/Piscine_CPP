/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 09:52:24 by clegirar          #+#    #+#             */
/*   Updated: 2018/08/01 10:38:44 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger( std::string const & file ) : _file(file) {
	return ;
}

Logger::~Logger( void ) {
	return ;
}

void 	Logger::_logToFile( std::string message ) {
	std::ofstream	myfile;

	myfile.open(this->_file, std::ios::app);
	if (!myfile.is_open()) {
		std::cout << "Cn't write to the file." << std::endl;
		exit(1);
	}
	myfile << message << std::endl;
	myfile.close();
	return ;
}

void 	Logger::_logToConsole( std::string message ) {
	std::cout << message << std::endl;
	return ;
}

std::string	Logger::_makeLogEntry( std::string message ) {
	char	buffer[50];
	std::string	ret;
	time_t	timer;
	struct	tm	*time_info;

	time(&timer);
	time_info = localtime(&timer);
	strftime(buffer, sizeof(buffer), "%d-%m-%Y %I:%M:%S", time_info);
	ret = "[" + std::to_string(this->_nbLog) + "] " + buffer + " : " + message;
	this->_nbLog += 1;
	return ret;
}

void 	Logger::log( std::string const & dest, std::string const & message ) {
	std::string		dest_tab[2] = {"File", "Console"};
	void 	(Logger::*dest_ptr[2])(std::string message) = {&Logger::_logToFile, &Logger::_logToConsole};

	for (int i = 0; i < 2; i++) {
		if (dest == dest_tab[i])
			(this->*dest_ptr[i])(_makeLogEntry(message));
	}
	return ;
}

int	Logger::_nbLog = 1;
