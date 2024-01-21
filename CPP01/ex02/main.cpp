/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:02:09 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/21 12:01:07 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR;
	std::string&	stringREF = str;

	stringPTR = &str;
	std::cout << "Printing the memory address of each:" << std::endl;
	std::cout  << std::endl;
	std::cout << "The string address is:         " << &str << std::endl;
	std::cout << "The string ref address is:     " << &stringREF << std::endl;
	std::cout << "The string pointer address is: " << stringPTR << std::endl;
	std::cout  << std::endl;
	
	std::cout << "-------------------------------------" << std::endl;
	std::cout  << std::endl;
	std::cout << "Printing the memory value of each:" << std::endl;
	std::cout  << std::endl;
	std::cout << "The string value is:         " << str << std::endl;
	std::cout << "The string ref value is:     " << stringREF << std::endl;
	std::cout << "The string pointer value is: " << *stringPTR << std::endl;
	std::cout  << std::endl;

	return 0;
}
