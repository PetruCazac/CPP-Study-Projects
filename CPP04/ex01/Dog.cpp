/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:39 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/01 22:30:21 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default dog class constructor is constructing." << std::endl;
	_type = "Dog";
	_dog_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Default dog class destructor is destructing." << std::endl;
	std::cout << "Deleting Dog Brain Class" << std::endl;
	delete _dog_brain;
}

Dog::Dog(const Dog& dog) : Animal(dog){
	std::cout << "Dog class copy constructor is constructing." << std::endl;
	this->_dog_brain = new Brain(*dog._dog_brain);
}

Dog& Dog::operator=(const Dog& dog) {
	std::cout << "Dog class copy assignement operator is copying." << std::endl;
	*this->_dog_brain = *dog._dog_brain;
	_type = dog._type;
	return *this;
}
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}

// Getter functions
std::string Dog::getType() const {
	return _type;
}
std::string Dog::getString(int i) const {
	return _dog_brain->_ideas[i];
}
std::string* Dog::getStringAddress(int i) const {
	return _dog_brain->_ideas+i;
}


// Setter functions
void	Dog::setString(std::string dog_idea, int i){
	_dog_brain->_ideas[i] = dog_idea;
}
