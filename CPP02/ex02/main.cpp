/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:28 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/01 14:51:13 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) * Fixed( 2 ) );

	a = 1;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "Arithmetic operations" << std::endl;
	std::cout << "a + b :"<< a + b << std::endl;
	std::cout << "a - b :"<< a - b << std::endl;
	std::cout << "a * b :"<< a * b << std::endl;
	std::cout << "a / b :"<< a / b << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	// Inccccrement operators
	std::cout << "Increment operator" << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a++:" << a++ << std::endl;
	std::cout << "a: "<< a << std::endl;
	std::cout << std::endl;

	// Decrement operators
	std::cout << "Decrement operator" << std::endl;
	std::cout << "a:  " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: "<< a << std::endl;
	std::cout << std::endl;

	// To Float conversion
	std::cout << "Conversion fucntions" << std::endl;
	std::cout << "a to float:" << a.toFloat() << std::endl;
	std::cout << "b to float: " << b.toFloat() << std::endl;
	std::cout << "a to int:" << a.toInt() << std::endl;
	std::cout << "b to int: " << b.toInt() << std::endl;
	std::cout << std::endl;

	// Min/Max operations
	std::cout << "Min and max functions" << std::endl;
	std::cout << "Max is:" << Fixed::max( a, b ) << std::endl;
	std::cout << "Min is:" << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;

	// Comparison operators
	std::cout << "Comparison operator" << std::endl;
	if(a < b)
		std::cout << a << " < " << b << " True" << std::endl;
	else
		std::cout << a << " < " << b << " False" << std::endl;
	if(a > b)
		std::cout << a << " > " << b << " True" << std::endl;
	else
		std::cout << a << " > " << b << " False" << std::endl;
	if(a >= b)
		std::cout << a << " >= " << b << " True" << std::endl;
	else
		std::cout << a << " >= " << b << " False" << std::endl;
	a = b;
	if(a <= b)
		std::cout << a << " <= " << b << " True" << std::endl;
	else
		std::cout << a << " <= " << b << " False" << std::endl;
	a++;
	if(a <= b)
		std::cout << a << " <= " << b << " True" << std::endl;
	else
		std::cout << a << " <= " << b << " False" << std::endl;
	if(a != b)
		std::cout << a << " != " << b << " True" << std::endl;
	else
		std::cout << a << " != " << b << " False" << std::endl;
	a--;
	if(a == b)
		std::cout << a << " == " << b << " True" << std::endl;
	else
		std::cout << a << " == " << b << " False" << std::endl;
	std::cout << std::endl;

	// Subject test
	std::cout << "Test from the Subject" << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}