/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:49:40 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/01 22:26:16 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default cat class constructor is constructing." << std::endl;
	_type = "Cat";
	_cat_brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Default cat class destructor is destructing." << std::endl;
	std::cout << "Deleting Cat Brain Class" << std::endl;
	delete _cat_brain;
}

Cat::Cat(const Cat& cat) : Animal(cat){
	std::cout << "Cat class copy constructor is constructing." << std::endl;
	this->_cat_brain = new Brain(*cat._cat_brain);
}

Cat& Cat::operator=(const Cat& cat){
	std::cout << "Cat class copy assignement operator is copying." << std::endl;
	*(this->_cat_brain) = *(cat._cat_brain);
	_type = cat._type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

// Getter functions
std::string Cat::getType() const {
	return _type;
}
std::string Cat::getString(int i) const {
	return _cat_brain->_ideas[i];
}
std::string* Cat::getStringAddress(int i) const {
	return _cat_brain->_ideas+i;
}

// Setter functions
void	Cat::setString(std::string cat_idea, int i){
	_cat_brain->_ideas[i] = cat_idea;
}
