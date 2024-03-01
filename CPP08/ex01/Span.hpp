/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:33:07 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/01 15:48:14 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span {
public:
	Span(unsigned int N);
	~Span();
	Span(const Span& s);
	Span& operator=(const Span& s);

	void addNumber(int i);
	void addRange(unsigned int size);
	void addRange(unsigned int size, int j);
	int shortestSpan();
	int longestSpan();

	class IllegalVectorManipulation : public std::exception {\
		public:
			const char* what() const throw(){
				return "Can't add more numbers!!!";
			}
	};
	class NotEnoughVectorMembers : public std::exception {\
		public:
			const char* what() const throw(){
				return "Not enough members!!!";
			}
	};
private:
	std::vector<int> _i;
};



#endif