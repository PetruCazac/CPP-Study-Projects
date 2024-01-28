/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:40 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:27:48 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default cat class constructor is constructing." << std::endl;
	_type = "Cat";
}

Cat::~Cat(){
	std::cout << "Default cat class destructor is destructing." << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat){
	std::cout << "Cat class copy constructor is constructing." << std::endl;
}

Cat& Cat::operator=(const Cat& cat){
	std::cout << "Cat class copy assignement operator is copying." << std::endl;
	_type = cat._type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const {
	return _type;
}