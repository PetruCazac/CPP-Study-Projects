#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	BitcoinExchange bit;

	if (argc != 2){
		std::cerr << "ERROR: Bad arguments" << std::endl;
		return 1;
	}
	if(!std::strlen(argv[1])){
		std::cerr << "ERROR: Empty argument" << std::endl;
		return 1;
	}
	std::ifstream input(argv[1]);
	if(!input.is_open()){
		std::cerr << "ERROR: Input file can't be opened" << std::endl;
		return 1;
	}
	bit.extractData();
	bit.showBtcValue(input);
	return 0;
}

