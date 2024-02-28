/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:34:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/28 14:08:50 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void function(T a){
	std::cout << a << std::endl;
}

int main( void ) {
	int intArr[] = {1, 2, 3, 4, 5};
	int intArrLength = sizeof(intArr) / sizeof(intArr[0]);

	double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int doubleArrLength = sizeof(doubleArr) / sizeof(doubleArr[0]);

	std::cout << "Integer array:\n";
	iter(intArr, intArrLength, function<int>);
	std::cout << std::endl;

	std::cout << "Double array:\n";
	iter(doubleArr, doubleArrLength, function<double>);
	std::cout << std::endl;

	return 0;
}