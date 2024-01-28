/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:33:31 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:44:44 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default Wrong animal class constructor is constructing." << std::endl;
	_type = "T-Rex";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Default wrong animal class destructor is destructing." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong_animal){
	std::cout << "WrongAnimal class copy constructor is constructing." << std::endl;
	_type = wrong_animal._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrong_animal){
	std::cout << "WrongAnimal class copy assignement operator is copying." << std::endl;
	_type = wrong_animal._type;
	return *this;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Meeeeeeeeehhh" << std::endl;
}

std::string WrongAnimal::getType() const{
	return _type;
}