/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:33:29 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/28 19:56:26 by pcazac           ###   ########.fr       */
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
	Array(int i);
	~Array();
	Array(const Array& n);
	Array&	operator=(const Array& n);

	T&	operator[](const Array& n);
	int		size(T& arr);
	class EndOfArray : public std::exception {
		public:
			const char* what() const throw();
	};

private:
	T*	arr;
	int	size;
};

#include "Array.tpp"

#endif
