/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:07:32 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/21 17:31:54 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){
	return ;
}

HumanB::HumanB(std::string name, Weapon& new_weapon) : _name(name), _weapon(&new_weapon){
	return ;
}

HumanB::~HumanB(){
	return ;
}

void	HumanB::setWeapon(Weapon& new_weapon){
	_weapon = &new_weapon;
	return ;
}

void	HumanB::attack(void){
	std::cout << this->_name << " attacks with their " << (this->_weapon->getType()) << std::endl;
	return ;
}