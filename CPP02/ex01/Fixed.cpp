/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/24 00:57:10 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return;
}
Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	int	fixed_point = i << this->_fractional_bits;
	this->setRawBits(fixed_point);
	return;
}
Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	int	fixed_point = roundf(f * (1 << this->_fractional_bits));
	this->setRawBits(fixed_point);
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
	return this->_fixed_point_value;
}

void	Fixed::setRawBits( int const raw ){
	this->_fixed_point_value = raw;
}
float	Fixed::toFloat( void ) const{
	return static_cast<float>(this->getRawBits()) / (1 << this->_fractional_bits);
}

int		Fixed::toInt( void ) const{
	return (this->getRawBits() >> this->_fractional_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return out;
}
