/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:41:06 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:21:34 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default animal class constructor is constructing." << std::endl;
	_type = "Giraffe";
}

Animal::~Animal(){
	std::cout << "Default animal class destructor is destructing." << std::endl;
}

Animal::Animal(const Animal& animal){
	std::cout << "Animal class copy constructor is constructing." << std::endl;
	_type = animal._type;
}

Animal& Animal::operator=(const Animal& animal){
	std::cout << "Animal class copy assignement operator is copying." << std::endl;
	_type = animal._type;
	return *this;
}

void Animal::makeSound(void) const{
	std::cout << "Moooo" << std::endl;
}

std::string Animal::getType() const{
	return _type;
}