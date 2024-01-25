/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:28 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/25 14:11:18 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a/b "<< a / b << std::endl;
	std::cout << "1st a: " << a << std::endl;
	std::cout << "a++:  and then another one " << a++ << std::endl;
	std::cout << "a:  and then another one " << a << std::endl;
	std::cout << "++a:  and then another one " << ++a << std::endl;
	std::cout << "a to int:" << a.toFloat() << std::endl;
	std::cout << "a++:" << a++ << std::endl;
	std::cout << "a: "<< a << std::endl;

	std::cout << "b: " << b.toFloat() << std::endl;

	std::cout << "Max is:" << Fixed::max( a, b ) << std::endl;

	return 0;
}

