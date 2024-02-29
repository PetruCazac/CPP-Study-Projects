/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:33:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/29 11:44:24 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <iostream>

template <class T>
class Array {
public:
	Array();
	Array(unsigned int i);
	~Array();
	Array(const Array& n);
	Array&	operator=(const Array& n);

	T&	operator[](int i);
	int		size();
	class EndOfArrayException : public std::exception {
		public:
			const char* what() const throw(){
				return "It is out of bounds!";
			}
	};

private:
	T*	arr;
	unsigned int	arrSize;
};

#include "Array.tpp"

#endif
