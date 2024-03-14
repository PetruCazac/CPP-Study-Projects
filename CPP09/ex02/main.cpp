#include "PmergeMe.hpp"

bool	checkSorted(std::vector<int> elements){
	for(std::vector<int>::iterator it = elements.begin(); it < elements.end() - 1; it++){
		if(*it > *(it + 1))
			return false;
	}
	return true;
}

int main(int argc, char** argv) {
	// Check if there are arguments and that the arguments are all numbers and parse the elements;
	if(argc <= 1){
		std::cout << "ERROR: Arguments not found." << std::endl;
		return 1;
	}
	std::vector<int>	elements;
	std::stringstream ss;
	for(int i = 1; i < argc; i++){
		if(!argv[i] || !argv[i][0]){
			std::cout << "ERROR: Argument error." << std::endl;
			return 1;
		}
		int l = std::strlen(argv[i]);
		for (int j = 0; j < l; j++){
			if (!std::isdigit(argv[i][j])){
				std::cout << "ERROR: Wrong characters found." << std::endl;
				return 1;
			}
			ss << argv[i][j];
		}
		std::string str;
		ss >> str;
		ss.clear();
		elements.push_back(std::atoi(str.c_str()));
		for(std::vector<int>::iterator it = elements.begin(); it < elements.end() - 1; it++){
			if(*it == elements.back()){
				std::cout << "ERROR: The arguments are double" << std::endl;
			return 1;
		}
		}
	}
	// Check that the numbers are not doubled
	if(checkSorted(elements)){
		std::cout << "The arguments are already sorted." << std::endl;
		return 0;
	}
	std::cout << "Before: ";
	for(std::vector<int>::iterator it = elements.begin(); it < elements.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	PmergeMe p;
	p.sort(elements);
	return 0;
}