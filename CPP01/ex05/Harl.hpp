/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:55:50 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/23 00:33:27 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class Harl{

public:

	Harl();
	~Harl();
	void complain( std::string level );
	
private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif