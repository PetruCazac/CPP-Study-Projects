#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include "Stack.hpp"



class RPN {
private:
	std::stack<double>	_s;
	bool	parse(char c);
	void	calculateResult(char c);
	void	makeAddition();
	void	makeSubtraction();
	void	makeMultiplication();
	void	makeDivision();

public:
	RPN();
	~RPN();
	RPN(const RPN& r);
	RPN& operator=(const RPN& r);

	void	startCalculator(std::string input);
	
	// Exceptions
	class WrongCharacterFound : public std::exception {
		const char* what() const throw(){
			return "ERROR: Wrong character was found";}
	};
	class UnknownCalculationException : public std::exception {
		const char* what() const throw(){
			return "ERROR: Unknown Calculation Error";}
	};
	class WrongArgumentConstruction : public std::exception {
		const char* what() const throw(){
			return "ERROR: Your argument is wrong dude";}
	};

};


#endif