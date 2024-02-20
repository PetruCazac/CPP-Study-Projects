/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:26 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/20 21:02:48 by pcazac           ###   ########.fr       */
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
	
}