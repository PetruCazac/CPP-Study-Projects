/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:04:56 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/02 11:00:28 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	return ;
}

Zombie::~Zombie(){
	std::cout << _name << " is annihilated!" << std::endl;
	return ;
}

void Zombie::announce(){
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setName(std::string name){
	_name = name;
	std::cout << _name << std::endl;
	return ;
}