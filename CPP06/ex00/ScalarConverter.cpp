/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/27 15:45:43 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &converter){
	(void) converter;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& converter){
	(void) converter;
	return *this;
}

// ======== Functions to determine the type ======== //
bool	isChar(std::string& input) {
	if ( input.length() != 1)
		return false;
	else if (std::isprint(input.c_str()[0]))
		return(true);
	return (false);
}

bool	isInt(std::string& input) {
	unsigned long i = 0;
	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.length()){
		if(!std::isdigit(input[i]))
			return false;
		i++;
	}
	long num = std::atol(input.c_str());
	if(num > static_cast<long>(std::numeric_limits<int>::max()) || \
		num < static_cast<long>(std::numeric_limits<int>::min()))
		return false;
	return true;
}

bool	isFloat(std::string& input) {
	unsigned long i = 0;
	bool decimal = false;

	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.length()){
		if((i + 1 == input.length() && input[i] == 'f' && i <= 10))
			break;
		else if(std::isdigit(input[i]) && i + 1 < input.length() && i <= 10)
			i++;
		else if(input[i] == '.' && decimal == false  && i + 3 < input.length() && i <= 10){
			i++;
			decimal = true;
		}
		else
			return false;
	}
	return true;
}

bool	isDouble(std::string& input) {
	unsigned long i = 0;
	bool decimal = false;
	if (input.length() > 19) {
		return false;
	}
	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.length()){
		if(std::isdigit(input[i]))
			i++;
		else if(input[i] == '.' && !decimal && i + 3 < input.length() && i < 18){
			i++;
			decimal = true;
		} else
			return false;
	}
	return true;
}

bool	isPseudoliteralf(std::string& input) {
	std::string lit[3] = {"-inff", "+inff", "nanf"};
	
	for (int i = 0; i < 3; i++){
		if (input == lit[i])
			return (true);
	}
	return false;
}

bool	isPseudoliteral(std::string& input) {
	std::string litf[3] = {"-inf", "+inf", "nan"};
	
	for (int i = 0; i < 3; i++){
		if (input == litf[i])
			return (true);
	}
	return false;
}

TYPE	treatInput(std::string input) {
	if(isPseudoliteral(input))
	{
		std::cout << "The input is a pseudo literal" << std::endl;
		return (SPECIAL);
	};
	if(isPseudoliteralf(input))
	{
		std::cout << "The input is a pseudo literal float" << std::endl;
		return (SPECIALF);
	};
	if(isChar(input))
	{
		std::cout << "The input is a char" << std::endl;
		return (CHAR);
	};
	if(isInt(input))
	{
		std::cout << "The input is a int" << std::endl;
		return (INT);
	};
	if(isFloat(input))
	{
		std::cout << "The input is a float" << std::endl;
		return (FLOAT);
	};
	if(isDouble(input))
	{
		std::cout << "The input is a double" << std::endl;
		return (DOUBLE);
	};
	return(ERR);
}

// ======== Functions to print the type ======== //

void	printChar(const std::string& input){
	char ch = input[0];
	std::cout << "char:   " << ch << std::endl;
	int i = static_cast<int>(ch);
	std::cout << "int:    " << i << std::endl;
	float f = static_cast<float>(ch);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:  " << f << "f\n";
	float d = static_cast<double>(ch);
	std::cout << "double: " << d << "\n" << std::endl;
	return ;
}

void	printInt(const std::string& input){
	std::istringstream iss(input);
	int i;
	iss >> i;
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);
	if(std::isprint(i)){
		char ch = static_cast<char>(i);
		std::cout << "char:   " << ch << std::endl;
	}else
		std::cout << "char:   impossible" << std::endl;
	std::cout << "int:    " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:  " << f << "f\n";
	std::cout << "double: " << d << "\n" << std::endl;
	return ;
}
void	printFloat(const std::string& input){
	std::string 		str = input;
	str.erase(input.length() - 1);
	std::istringstream	iss(str);
	int					precision = str.length() - 1 - str.find('.');
	float				f;
	iss >> f;
	double d = static_cast<double>(f);
	if(std::isprint(f)){
		char ch = static_cast<char>(f);
		std::cout << "char:   " << ch << std::endl;
	}else
		std::cout << "char:   impossible" << std::endl;
		
	if(f > static_cast<double>(std::numeric_limits<int>::max()) || \
		f < static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << "int:    impossible" << std::endl;
	else{
		int i = static_cast<int>(f);
		std::cout << "int:    " << i << std::endl;
	}
	std::cout << std::setprecision(precision);
	std::cout << "float:  " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout << std::setprecision(6);
	return ;
}

void	printDouble(const std::string& input){
	std::istringstream	iss(input);
	double				d;
	int					precision = input.length() - 1 - input.find('.');
	iss >> d;
	if(std::isprint(d)){
		char ch = static_cast<char>(d);
		std::cout << "char:   " << ch << std::endl;
	}else
		std::cout << "char:   impossible" << std::endl;

	if(d > static_cast<double>(std::numeric_limits<int>::max()) || \
		d < static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << "int:    impossible" << std::endl;
	else{
		int i = static_cast<int>(d);
		std::cout << "int:    " << i << std::endl;
	}

	std::cout << std::setprecision(precision);
	if(d > static_cast<double>(std::numeric_limits<float>::max()) || \
		d < static_cast<double>(std::numeric_limits<float>::min()))
		std::cout << "float:  impossible" << std::endl;
	else{
		float f = static_cast<float>(d);
		std::cout << "float:  " << f << "f" << std::endl;
	}
	std::cout << "double: " << d << std::endl;
	std::cout << std::setprecision(6);
	return ;
}

void	printPseudoLiteral(const std::string& input){
	double d;
	std::istringstream iss(input);
	iss >> d;
	float f = static_cast<float>(d);
	std::cout << "char:   impossible" << std::endl;
	std::cout << "int:    impossible" << std::endl;
	std::cout  << std::fixed;
	std::cout << "float:  " << std::showpoint << f << "f" << std::endl;
	std::cout << "double: " << std::showpoint << d << std::endl;
	return ;
}
void	printPseudoLiteralF(const std::string& input){
	std::string 		str = input;
	str.erase(input.length() - 1);
	std::istringstream	iss(str);
	float f;
	iss >> f;
	double d = static_cast<double>(f);
	std::cout << "char:   impossible" << std::endl;
	std::cout << "int:    impossible" << std::endl;
	std::cout << std::fixed;
	std::cout << "float:  " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return ;
}


// ======== Main Fiunction ======== //
void ScalarConverter::convert(const std::string& input){
	TYPE	type;

	if(!input.length()){
		std::cout << "Error: argument not found\n" << std::endl;
		return;
	}
	type = treatInput(input);
	if(type ==  ERR){
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	switch (type) {
		case CHAR:
			printChar(input);
			return ;
		case INT:
			printInt(input);
			return ;
		case FLOAT:
			printFloat(input);
			return ;
		case DOUBLE:
			printDouble(input);
			return ;
		case SPECIAL:
			printPseudoLiteral(input);
			return ;
			// printDouble(input);
		case SPECIALF:
			printPseudoLiteralF(input);
			return ;
			// printFloat(input);
		default :
			std::cout << "Error occured\n";
			return ;
	}
}