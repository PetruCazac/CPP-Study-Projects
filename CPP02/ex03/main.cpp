/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:28 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 13:37:50 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point const a(-5, 0);
	Point const b(4,0);
	Point const c(3,4);
	// Point const point(4, 4);
	// Point const point(2, 2);
	// Point const point(3, 3);
	Point const point(3 , 4);
	// Point const point(1, 0.1);

	switch (bsp(a, b, c, point))
	{
	case false :
		std::cout << "There is no way the point is in the triangle" << std::endl;
		break;
	case true :
		std::cout << "The point is indeed in the triangle" << std::endl;
		break;
	}
	return 0;
}