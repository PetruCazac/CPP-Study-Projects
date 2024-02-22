/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/22 16:33:09 by pcazac           ###   ########.fr       */
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

	std::string get_type(std::string input) const{
		
	}
// ======== Functions to print the type ======== //
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

void ScalarConverter::convert(std::string& input){
	// find the type
	std::string type;
	type = get_type();
	// send the type to be printed

}