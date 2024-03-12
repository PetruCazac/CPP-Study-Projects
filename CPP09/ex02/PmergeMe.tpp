#ifndef PMERGEME_TPP
#define PMERGEME_TPP

#include "PmergeMe.hpp"

template <typename T, typename C>
void PmergeMe::sortCont(T& numbers, C& pairs){
	gettimeofday(_startT, NULL);
	// Pair the numbers, take care of the last one.
	typename T::const_iterator it = numbers.begin();
	typename T::const_iterator end = numbers.end();
	while(it < end){
		if(it < end - 1){
			pairs.push_back(make_pair(*it, *(++it)));
		} else {
			pairs.push_back(make_pair(-1, *(it)));
		}
		it++;
	}
	// Sort the numbers in eah pair and sort recursively the pairs
	typename T::iterator it = pairs.begin();
	typename T::iterator end = pairs.end();
	while(it < end){
		if(it->first < it->second && it->first > 0)
		{
			int temp = it->first;
			it->first = it->second;
			it->second = temp;
		}
		it++;
	}
	mergeSort(pairs, pairs.begin(), pairs.end());

	// Separate the numbers in 2 containers of the same type and generate a Jacobsthal sequence
	separateAndInsert(pairs);
	// Take each number from the sequence index and perform a binary searcha and
	// insert in the right position

	
	gettimeofday(_endT, NULL);
	printResults();
}

template <typename T>
void separateAndInsert(T& pairs){

}


template <typename T, typename beginT, typename endT>
void PmergeMe::mergeSort(T& pairs, beginT begin, endT end){
	if(begin >= end)
		return;
	typename T::iterator middle = begin + (end - begin) / 2;
	mergeSort(pairs, begin, middle);
	mergeSort(pairs, middle + 1, end);
	merge(pairs, begin, middle, end);
}

template <typename T, typename beginT, typename middleT, typename endT>
void PmergeMe::merge(T& pairs, beginT begin, middleT middle, endT end){

}

template <typename T>
void PmergeMe::findInsert(T& numb){
	// Effectuate a binary search to determine the index of insertion
	// Take the number and insert it

	// Insert all the precedent numbers that were skipped and insert.
	
}

template <typename T>
void printResults(T& c){
	
}

#endif PMERGEME_TPP