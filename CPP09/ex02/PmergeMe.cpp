#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	_jacob[0] = 1;
	_jacob[1] = 1;
	_remainder = -1;
}
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

void PmergeMe::sort(std::vector<int> elements){
	/*Testing deque*/
	_startT = std::clock();
	_elementsD.assign(elements.begin(), elements.end());
	std::deque<std::pair<int, int> > pairsD;
	sortCont(_elementsD, pairsD);
	std::cout << _output.str();
	std::cout << _result.str();
	
	/*Testing vector*/
	_startT = std::clock();
	_elementsV = elements;
	std::vector<std::pair<int, int> > pairsV;
	sortCont(_elementsV, pairsV);
	std::cout << _result.str();
}

void PmergeMe::generateJacobsthal(void){
		size_t temp = _jacob[0];
		_jacob[0] = _jacob[1];
		_jacob[1] = _jacob[0] + 2 * temp;
}

void PmergeMe::resetConsts(void){
	_jacob[0] = 1;
	_jacob[1] = 1;
	_remainder = -1;
	_output.str("");
	_output.clear();
	_result.str("");
	_result.clear();
}

void PmergeMe::printResults(const std::vector<int>& vec, int i){
	static_cast<void>(vec);
	_result << "Time to process a range of " << i << " elements with std::vector<int> in ";
	_result <<  1000.00 * (_endT - _startT) / CLOCKS_PER_SEC << " ms" << std::endl;
	_startT = 0;
	_endT = 0;
}

void PmergeMe::printResults(const std::deque<int>& deq, int i){
	static_cast<void>(deq);
	_result << "Time to process a range of " << i << " elements with std::deque<int> in ";
	_result <<  1000.00 * (_endT - _startT) / CLOCKS_PER_SEC << " ms" << std::endl;
	_startT = 0;
	_endT = 0;
}