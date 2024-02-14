/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:45:55 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/14 15:51:27 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void){

}


Harl::~Harl(void){

}

void Harl::debug( void ){
	std::cout << "I know the reason of my unfortunate situation. I haven't been eating for a while...";
	std::cout << std::endl;
}

void Harl::info( void ){
	std::cout << "You know with a bit of food I could really be more friendly. I could even give you 5 stars on google.";
	std::cout << std::endl;
}

void Harl::warning( void ){
	std::cout << "Hey that's not how you treat a hungry man. I am warning you!";
	std::cout << std::endl;
}

void Harl::error( void ){
	std::cout << "\"Harl goes ahead and flips the table\"";
	std::cout << std::endl;
}

void Harl::complain( std::string level ){
	void	(Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++){
		if (level.compare(levels[i]) == 0){
			w
			return;
		}
	}

	std::cout << "Harl can't handle this right now, find a better wording.";
	std::cout << std::endl;
	return;
}
