/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/24 18:28:33 by pcazac           ###   ########.fr       */
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
	bool	isString(std::string& input) const{
		
	}
	bool	isInt(std::string& input) const{
		
	}
	bool	isFloat(std::string& input) const{
		
	}
	bool	isDouble(std::string& input) const{
		
	}
	bool	isPseudoliteral(std::string& input) const{
		
	}

	TYPE	treatInput(std::string input) const{
		if(isString(input))
		{
			std::cout << "The input is a char" << std::endl;
			return (CHAR);
		};
		if(isString(input))
		{
			std::cout << "The input is a char" << std::endl;
			return (CHAR);
		};
		if(isString(input))
		{
			std::cout << "The input is a char" << std::endl;
			return (CHAR);
		};
		if(isString(input))
		{
			std::cout << "The input is a char" << std::endl;
			return (CHAR);
		};
		if(isString(input))
		{
			std::cout << "The input is a char" << std::endl;
			return (CHAR);
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
		
	}
	void	printInt(std::string& input){
		
	}
	void	printFloat(std::string& input){
		
	}
	void	printDouble(std::string& input){
		
	}
	void	printPseudoLiteral(std::string& input){
		
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
		default :
			std::cout << "Error occured,"
			return;
	}
}