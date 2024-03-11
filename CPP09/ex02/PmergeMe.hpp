#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <vector>
#include <deque>

class PmergeMe {
private:
	std::vector<int>	_elementsV;
	std::deque<int>		_elementsD;

public:
	PmergeMe(std::vector<int> elements);
	~PmergeMe();
	PmergeMe(const PmergeMe& p);
	PmergeMe& operator=(const PmergeMe& p);
	
	void sortVector();
	void sortDeque();
	void constructVector();
	void constructDeque();
};

#endif