/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:34:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/29 13:08:15 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

int main(){
	Array<char>	strC(10);
	Array<int>		strI(5);
	Array<int>		strI1 = strI;
	
	// Check the assignment operator
	for (int i=0; i < strI.size(); i++){
		strI[i] = i;
		strI1[i] = i;
	}
	for (int i=0; i < strI.size(); i++){
		std::cout << "Int 1 = " << strI[i] << std::endl;
	}
	std::cout << "\n" ;
	for (int i=0; i < strI.size(); i++){
		std::cout << "Int 2 = " << strI1[i] << std::endl;
	}
	std::cout << "\n" ;
	
	for (int i=0; i < strI.size(); i++)
		strI1[i] = 42;
	for (int i=0; i < strI.size(); i++){
		std::cout << "Int 1 = " << strI[i] << std::endl;
	}
	std::cout << "\n" ;
	for (int i=0; i < strI.size(); i++){
		std::cout << "Int 2 = " << strI1[i] << std::endl;
	}
	std::cout << "\n" ;
	
	// Check the out of bounds and the operator
	for (int i=0; i < strC.size(); i++)
		strC[i] = 'A' + i;
	try{
		for (int i = 0; i < strC.size(); i++)
			std::cout << strC[i] << std::endl;
		std::cout << strC[strC.size()] << std::endl;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}


// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;
// 	return 0;
// }