/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/26 17:12:00 by pcazac           ###   ########.fr       */
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
bool	isString(std::string& input) {
	if ( input.size() != 1)
		return false;
	else if (std::isalpha(input.c_str()[0]));
		return(true);
}

bool	isInt(std::string& input) {
	int i = 0;
	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.size()){
		if(!std::isdigit(input[i]))
			return false;
		i++;
	}
	long long num = std::atoll(input.c_str());
	if(num > static_cast<long long>(std::numeric_limits<int>::max()) || \
		num < static_cast<long long>(std::numeric_limits<int>::min()))
		return false;
	return true;
}

bool	isFloat(std::string& input) {
	int i = 0;
	bool decimal = false;

	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.size()){
		if((i + 1 == input.size() && input[i] == 'f' && i <= 10))
			break;
		else if(std::isdigit(input[i]) && i + 1 < input.size() && i <= 10)
			i++;
		else if(input[i] == '.' && decimal == false  && i + 3 < input.size() && i <= 10){
			i++;
			decimal = true;
		}
		else
			return false;
	}
	long double num = std::atoll(input.c_str());
	if(num > static_cast<long double>(std::numeric_limits<float>::max()) || \
		num < static_cast<long double>(std::numeric_limits<float>::min()))
		return false;
	return true;
}

bool	isDouble(std::string& input) {
	int i = 0;
	bool decimal = false;

	if(input[i] == '+' || input[i] == '-')
		i++;
	while(i < input.size()){
		if(std::isdigit(input[i]) && i + 1 < input.size() && i <= 15)
			i++;
		else if(input[i] == '.' && decimal == false  && i + 3 < input.size() && i <= 15){
			i++;
			decimal = true;
		}
		else
			return false;
	}
	long double num = std::atoll(input.c_str());
	if(num > static_cast<long double>(std::numeric_limits<double>::max()) || \
		num < static_cast<long double>(std::numeric_limits<double>::min()))
		return false;
	return true;
}

bool	isPseudoliteral(std::string& input) {
	std::string lit[3] = {"-inff", "+inff", "nanf"};
	
	for (int i = 0; i < 3; i++){
		if (input == lit[i])
			return (true);
	}
	return false;
}

bool	isPseudoliteralf(std::string& input) {
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
	if(isString(input))
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
}

// ======== Functions to print the type ======== //
void	convertChar(std::string& input){
	
}
void	convertInt(std::string& input){
	
}
void	convertFloat(std::string& input){
	
}
void	convertDouble(std::string& input){
	
}
void	convertPseudoLiteral(std::string& input){
	
}

void	printChar(std::string& input){
	char ch = input[0];
	std::cout << "char: " << ch << std::endl;
	int i = static_cast<int>(ch);
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(ch);
	std::cout << "float: " << f << "f" << std::endl;
	float d = static_cast<double>(ch);
	std::cout << "double: " << d << std::endl;
	return ;
}
void	printInt(std::string& input){
	std::istringstream iss;
	iss << input;
	
}
void	printFloat(std::string& input){
	
}
void	printDouble(std::string& input){
	
}
void	printPseudoLiteral(std::string& input){
	
}
void	printPseudoLiteralF(std::string& input){
	
}


// ======== Main Fiunction ======== //
void ScalarConverter::convert(std::string& input){
	TYPE	type;

	if(!input.size()){
		std::cout << "Error: argument not found\n" << std::endl;
		return;
	}
	type = treatInput(input);
	switch (type) {
		case CHAR:
			printChar(input);
		case INT:
			printInt(input);
		case FLOAT:
			printFloat(input);
		case DOUBLE:
			printDouble(input);
		case SPECIAL:
			printPseudoLiteral(input);
		case SPECIALF:
			printPseudoLiteralF(input);
		default :
			std::cout << "Error occured,";
			return ;
	}
}