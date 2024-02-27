/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:34 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/27 15:47:50 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	std::string c  = "d";
	std::string i  = "12903";
	std::string f  = "1230.232f";
	std::string f1 = "nanf";
	std::string f2 = "+inff";
	std::string f3 = "-inff";
	std::string d  = "12390.122";
	std::string d1 = "nan";
	std::string d2 = "+inf";
	std::string d3 = "-inf";
	
	std::cout << "/==========Convert char 'c'===========/\n";
	ScalarConverter::convert(c);
	std::cout << "\n";
	
	std::cout << "/==========Convert int '12903'===========/\n";
	ScalarConverter::convert(i);
	std::cout << "\n";
	
	std::cout << "/==========Convert float '1230.232f'===========/\n";
	ScalarConverter::convert(f);
	std::cout << "\n";
	
	std::cout << "/==========Convert float 'nanf'===========/\n";
	ScalarConverter::convert(f1);
	std::cout << "\n";

	std::cout << "/==========Convert float '+inff'===========/\n";
	ScalarConverter::convert(f2);
	std::cout << "\n";

	std::cout << "/==========Convert float '-inff'===========/\n";
	ScalarConverter::convert(f3);
	std::cout << "\n";
	
	std::cout << "/==========Convert double '12390.122'===========/\n";
	ScalarConverter::convert(d);
	std::cout << "\n";
	
	std::cout << "/==========Convert double 'nan'===========/\n";
	ScalarConverter::convert(d1);
	std::cout << "\n";

	std::cout << "/==========Convert double '+inf'===========/\n";
	ScalarConverter::convert(d2);
	std::cout << "\n";

	std::cout << "/==========Convert double '-inf'===========/\n";
	ScalarConverter::convert(d3);
	std::cout << "\n";
	
	return 0;
}