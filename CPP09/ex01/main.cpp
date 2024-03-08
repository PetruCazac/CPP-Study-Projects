#include "RPN.hpp"

int main(int argc, char** argv) {

	if(argc != 2){
		std::cerr << "ERROR: Wrong Arguments" << std::endl;
		return 1;
	}
	if(!std::strlen(argv[1])){
		std::cerr << "ERROR: Empty Argument" << std::endl;
		return 1;
	}
	RPN mem;
	try {
	mem.startCalculator(argv[1]);
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
		return 1;}
	return 0;
}