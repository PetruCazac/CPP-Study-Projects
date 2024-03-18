/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:34:15 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/18 14:12:06 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main( void ) {
// 	try{
// 	unsigned int vectorSize = 20000;
// 	Span	s = Span(vectorSize);
// 	s.addRange(vectorSize);
// 	std::cout << "Longest span is: " << s.longestSpan() << std::endl;
// 	std::cout << "Shortest span is: " << s.shortestSpan() << std::endl;
// 	s.addNumber(100);
// 	s.addNumber(100);
// 	s.addNumber(100);
// 	s.addNumber(100);
// 	s.addNumber(100);
// 	}catch(std::exception& e){
// 		std::cerr << e.what() << std::endl;
// 	}
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}