/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:42:24 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/26 17:46:26 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <limits>

enum TYPE {
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		SPECIAL,
		SPECIALF
};

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