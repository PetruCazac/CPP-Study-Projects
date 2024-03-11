#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> elements) 
	: _elementsV(elements), _elementsD(elements.begin(), elements.end()){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& p){
	_elementsV = p._elementsV;
	_elementsD = p._elementsD;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& p){
	_elementsV = p._elementsV;
	_elementsD = p._elementsD;
	return *this;
}

	/*Sorting Algorithm*/

void PmergeMe::sort(typename T){

}