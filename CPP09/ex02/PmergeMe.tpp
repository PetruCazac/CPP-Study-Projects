#ifndef PMERGEME_TPP
#define PMERGEME_TPP

#include "PmergeMe.hpp"

template <typename T, typename C>
void PmergeMe::sortCont(T& numbers, C& pairs){
	gettimeofday(&_startT, NULL);
	typename T::const_iterator it = numbers.begin();
	typename T::const_iterator end = numbers.end();
	while(it < end){
		if(it < end - 1){
			pairs.push_back(std::make_pair(*it, *(++it)));
		} else
			_remainder = *it;
		it++;
	}
	typename C::iterator ip = pairs.begin();
	typename C::iterator endp = pairs.end();
	while(ip < endp){
		if(ip->first < ip->second)
		{
			int temp = ip->first;
			ip->first = ip->second;
			ip->second = temp;
		}
		ip++;
	}
	mergeSort(pairs);
	separateAndInsert(pairs, numbers);
	printResults(numbers, numbers.size());
}

template <typename C>
void PmergeMe::mergeSort(C& pairs){
	if(pairs.size() == 1)
		return;
	size_t middle = pairs.size() / 2;
	C left(pairs.begin(), pairs.begin() + middle);
	C right(pairs.begin() + middle , pairs.end());
	mergeSort(left);
	mergeSort(right);

	std::merge(left.begin(), left.end(), right.begin(), right.end(), pairs.begin());
}

template <typename C, typename T>
void PmergeMe::separateAndInsert(C& pairs, T& numbers){
	T	firstChain(pairs.size());
	T	secondChain(pairs.size());

	static_cast<void>(numbers);
	typename T::iterator itF = firstChain.begin();
	typename T::iterator itS = secondChain.begin();
	for(typename C::iterator it = pairs.begin(); it < pairs.end(); it++){
		*itF++ = it->first;
		*itS++ = it->second;
	}
	if(_remainder >= 0)
		secondChain.push_back(_remainder);
	findInsert(firstChain, secondChain);
}

template <typename T>
void PmergeMe::findInsert(T& firstChain, T& secondChain){
	resetConsts();
	size_t i = 0;
	typename T::iterator it = firstChain.begin();
	firstChain.insert(it, secondChain[0]);
	while(_jacob[1] < secondChain.size()){
		generateJacobsthal();
		if(secondChain.size() >= _jacob[1])
			i = _jacob[1] - 1;
		else
			i = secondChain.size() - 1;
		while(i >= _jacob[0]){
			it = std::upper_bound(firstChain.begin(), firstChain.end(), secondChain[i]);
			firstChain.insert(it, secondChain[i]);
			i--;
		}
	}
	printContainer(firstChain);
}

template <typename T>
void PmergeMe::printContainer(T& c){
	_output << "After:  ";
	for( typename T::iterator it = c.begin(); it < c.end(); it++){
		_output << *it << " ";
	}
	_output << std::endl;
}

#endif