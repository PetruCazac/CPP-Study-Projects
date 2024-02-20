/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:24 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/20 16:44:06 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {

public:

	static void convert(const std::string& input);
	
private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &converter);
	ScalarConverter& operator=(const ScalarConverter &converter);

};

#endif