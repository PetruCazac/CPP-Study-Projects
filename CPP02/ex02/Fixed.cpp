/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/25 14:11:00 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	this->setRawBits(0);
	return;
}
Fixed::Fixed(const int i){
	int	fixed_point = i << this->_fractional_bits;
	this->setRawBits(fixed_point);
	return;
}
Fixed::Fixed(const float f){
	int	fixed_point = roundf(f * (1 << this->_fractional_bits));
	this->setRawBits(fixed_point);
	return;
}
Fixed::~Fixed(){
	return;
}

Fixed::Fixed(const Fixed& other){
	this->_fixed_point_value = other.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed& other){

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

// Overloading the ostream operator (AKA insertion operator)

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return out;
}


// Comparison Operators

bool	Fixed::operator>(const Fixed fixed) const{
	return (this->getRawBits() > fixed.getRawBits());}

bool	Fixed::operator<(const Fixed fixed) const{
	return (this->getRawBits() < fixed.getRawBits());}

bool	Fixed::operator>=(const Fixed fixed) const{
	return (this->getRawBits() >= fixed.getRawBits());}

bool	Fixed::operator<=(const Fixed fixed) const{
	return (this->getRawBits() <= fixed.getRawBits());}

bool	Fixed::operator==(const Fixed fixed) const{
	return (this->getRawBits() == fixed.getRawBits());}

bool	Fixed::operator!=(const Fixed fixed) const{
	return (this->getRawBits() != fixed.getRawBits());}


// Arithmetic Operators

Fixed	Fixed::operator+(const Fixed& fixed) const {
	Fixed	new_fixed;
	new_fixed.setRawBits(this->getRawBits() + fixed.getRawBits());
	return new_fixed;
}
Fixed	Fixed::operator-(const Fixed& fixed) const {
	Fixed	new_fixed;
	new_fixed.setRawBits(this->getRawBits() - fixed.getRawBits());
	return new_fixed;
}
Fixed	Fixed::operator*(const Fixed& fixed) const {
	Fixed	new_fixed(this->toFloat() * fixed.toFloat());
	return new_fixed;
}
Fixed	Fixed::operator/(const Fixed& fixed) const {
	Fixed	new_fixed(this->toFloat() / fixed.toFloat());
	return new_fixed;
}


// Pre- and Post- Increment and Decrement

Fixed&	Fixed::operator ++(){
	++_fixed_point_value;
	return *this;
}

Fixed	Fixed::operator ++(int){
	Fixed	fixed(*this);
	++_fixed_point_value;
	return fixed;
}

Fixed&	Fixed::operator --(){
	--this->_fixed_point_value;
	return *this;
}

Fixed	Fixed::operator --(int){
	Fixed	fixed(*this);
	--this->_fixed_point_value;
	return fixed;
}

// Min and max functions
Fixed	Fixed::min(Fixed& fixed_a, Fixed& fixed_b){
	if (fixed_a.getRawBits() > fixed_b.getRawBits())
		return (fixed_b);
	else
		return (fixed_a);
}
Fixed	Fixed::min(const Fixed& fixed_a, const Fixed& fixed_b){
	if (fixed_a.getRawBits() > fixed_b.getRawBits())
		return (fixed_b);
	else
		return (fixed_a);
}
Fixed	Fixed::max(Fixed& fixed_a, Fixed& fixed_b){
	if (fixed_a.getRawBits() > fixed_b.getRawBits())
		return (fixed_a);
	else
		return (fixed_b);
}
Fixed	Fixed::max(const Fixed& fixed_a, const Fixed& fixed_b){
	if (fixed_a.getRawBits() > fixed_b.getRawBits())
		return (fixed_a);
	else
		return (fixed_b);
}
