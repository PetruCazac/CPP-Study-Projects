#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> elements) 
	: _elementsV(elements), _elementsD(elements.begin(), elements.end()){
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

void PmergeMe::sort(){
	std::deque<std::pair<int, int> > pairsD;
	sortCont(_elementsD, pairsD);
	std::cout << _output.str();
	std::cout << _result.str();
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
	struct timeval	time;
	long long		timeSort = 0;
	gettimeofday(&time, NULL);
	time.tv_sec = (time.tv_sec - _startT.tv_sec) * 1000000;
	time.tv_usec += time.tv_usec + (1000000 - _startT.tv_usec);
	timeSort = time.tv_sec + time.tv_usec;
	_result << "Time to process a range of " << i << " elements with std::vector<int> in ";
	_result << timeSort << " us" << std::endl;
	_startT.tv_sec = 0;
	_startT.tv_usec = 0;
}

void PmergeMe::printResults(const std::deque<int>& deq, int i){
	static_cast<void>(deq);
	struct timeval	time;
	long long		timeSort = 0;
	gettimeofday(&time, NULL);
	time.tv_sec = (time.tv_sec - _startT.tv_sec) * 1000000;
	time.tv_usec += time.tv_usec + (1000000 - _startT.tv_usec);
	timeSort = time.tv_sec + time.tv_usec;
	time.tv_sec /= 1000000;
	_result << "Time to process a range of " << i << " elements with  with std::deque<int> in ";
	_result << timeSort << " us" << std::endl;
	_startT.tv_sec = 0;
	_startT.tv_usec = 0;
}