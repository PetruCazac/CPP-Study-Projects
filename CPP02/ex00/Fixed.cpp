/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/23 16:15:59 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_value = other.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other){
		this->_fixed_point_value = other.getRawBits();
	}
	return *this;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void	Fixed::setRawBits( int const raw ){
	this->_fixed_point_value = raw;
}