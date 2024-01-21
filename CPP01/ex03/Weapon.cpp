/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:13:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/21 16:11:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::Weapon(std::string weapon){
	this->setType(weapon);
	return ;
}

Weapon::~Weapon(){
	return ;
}

const std::string& Weapon::getType(){
	return _type;
}

void Weapon::setType(std::string new_type){
	_type = new_type;
	return ;
}