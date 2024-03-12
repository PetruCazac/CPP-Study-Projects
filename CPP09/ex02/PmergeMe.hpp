#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <utility>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <vector>
#include <deque>
#include <sys/time.h>

class PmergeMe {
private:
	int					_jakob[3];
	std::vector<int>	_elementsV;
	std::deque<int>		_elementsD;
	struct timeval*		_startT;
	struct timeval*		_endT;

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
	void generateJacobsthal();

	template <typename T>
	void recursiveSort(T& pairs);

	template <typename T>
	void separateAndInsert(T& pairs);

	template <typename T>
	void findInsert(T& numbers);
	
	template <typename T>
	void printResults(T& c);


};

#include "PmergeMe.tpp"

#endif