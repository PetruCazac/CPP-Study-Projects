#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <utility>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <sstream>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <algorithm>

class PmergeMe {
private:
	size_t				_jacob[2];
	std::stringstream	_output;
	std::stringstream	_result;
	std::vector<int>	_elementsV;
	std::deque<int>		_elementsD;
	struct timeval		_startT;
	int					_remainder;

public:
	PmergeMe(std::vector<int> elements);
	~PmergeMe();
	PmergeMe(const PmergeMe& p);
	PmergeMe& operator=(const PmergeMe& p);

	// Sorting algorithm
	void sort();
	template <typename T, typename C>
	void sortCont(T& numbers, C& pairs);

	// Helper Functions
	void generateJacobsthal(void);
	void resetConsts(void);

	template <typename C>
	void mergeSort(C& pairs);

	template <typename C, typename T>
	void separateAndInsert(C& pairs, T& elements);

	template <typename T>
	void findInsert(T& firstChain, T& secondChain);

	template <typename T>
	void printContainer(T& c);

	void printResults(const std::vector<int>& , int i);
	void printResults(const std::deque<int>& , int i);

};

#include "PmergeMe.tpp"

#endif