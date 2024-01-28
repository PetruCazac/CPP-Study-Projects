/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:15:02 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/28 22:39:46 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Default wrong_cat class constructor is constructing." << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "Default wrong_cat class destructor is destructing." << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong_cat) : WrongAnimal(wrong_cat){
	std::cout << "WrongCat class copy constructor is constructing." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrong_cat){
	std::cout << "WrongCat class copy assignement operator is copying." << std::endl;
	_type = wrong_cat._type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Raaawwwwrrr" << std::endl;
}

std::string WrongCat::getType() const {
	return _type;
}