/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:39 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:21:59 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default dog class constructor is constructing." << std::endl;
	_type = "Dog";
}

Dog::~Dog(){
	std::cout << "Default dog class destructor is destructing." << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog){
	std::cout << "Dog class copy constructor is constructing." << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
	std::cout << "Dog class copy assignement operator is copying." << std::endl;
	_type = dog._type;
	return *this;
}
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}

std::string Dog::getType() const {
	return _type;
}