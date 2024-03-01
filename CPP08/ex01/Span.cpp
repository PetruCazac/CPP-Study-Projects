/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:33:03 by pcazac            #+#    #+#             */
/*   Updated: 2024/03/01 15:48:04 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) {
	_i.reserve(N);
}
Span::~Span(){}
Span::Span(const Span& s){
	_i = s._i;
}
Span& Span::operator=(const Span& s){
	if (this != &s){
		_i = s._i;
	}
	return *this;
}

void Span::addNumber(int i){
	if(_i.size() < _i.capacity())
		_i.push_back(i);
	else
		throw(IllegalVectorManipulation());
}
void Span::addRange(unsigned int size){
	int t = std::time(NULL);
	try{
	for (unsigned int i = 0; i < size; i++){
		std::srand(t++);
		std::cout << std::rand() << std::endl;
		addNumber(std::rand());
	}
	}catch(std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}
void Span::addRange(unsigned int size, int j){
	try{
	for (unsigned int i = 0; i < size; i++){
		addNumber(j);
	}
	}catch(std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

int Span::shortestSpan(){
	int	minSpan = 0;
	int	tempSpan = 0;

	if (_i.size() <= 1)
		throw(NotEnoughVectorMembers());
	minSpan = std::abs( *(_i.begin()) - *(++_i.begin()));
	for(std::vector<int>::iterator it = _i.begin(); it < _i.end(); it++){
		for(std::vector<int>::iterator iit = _i.begin(); iit < _i.end(); iit++){
			tempSpan = std::abs(*it - *iit);
			if(tempSpan < minSpan && it != iit)
				minSpan = tempSpan;
		}
	}
	return minSpan;
}
int Span::longestSpan(){
	if (_i.size() <= 1)
		throw(NotEnoughVectorMembers());
	std::vector<int>::iterator max = std::max_element(_i.begin(), _i.end());
	std::vector<int>::iterator min = std::min_element(_i.begin(), _i.end());
	return (*max - *min);
}