/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 18:34:06 by clegirar          #+#    #+#             */
/*   Updated: 2018/07/30 21:38:31 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_CLASS_HPP
# define ADD_CLASS_HPP

class	Add	{

public:

	int						index;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;

	Add( void );
	~Add( void );

	void 	AddContact( int *ind );

private:

	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

};

#endif
