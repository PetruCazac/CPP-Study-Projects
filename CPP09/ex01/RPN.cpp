#include "RPN.hpp"

	/*Constructors*/

RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(const RPN& r){
	_s = r._s;
}
RPN& RPN::operator=(const RPN& r){
	_s = r._s;
	return *this;
}

	/*Class functions*/

void RPN::startCalculator(std::string input){
	try {
		for(std::string::iterator it = input.begin(); it < input.end(); it++){
			if(!this->parse(*it)){
				calculateResult(*it);
				it++;
			}
		}
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;}
	if(_s.size() == 1)
		std::cout << "Result: " << _s.top() << std::endl;
	else
		std::cout << "Wrong input of arguments" << std::endl;
}

bool RPN::parse(char c){
	std::stringstream ss;
	double i = 0;
	if(c >= '0' && c <= '9'){
		ss << c;
		ss >> i;
		_s.push(i);
		return true;
	} else if(std::isspace(c)){
		return true;
	} else if( c == '+' || c == '-' || c == '/' || c == '*'){
		return false;
	} else
		throw(WrongCharacterFound());
	return true;
}

void RPN::calculateResult(char c){
	switch (c) {
		case '+' :
			makeAddition();
			break;
		case '-' :
			makeSubtraction();
			break;
		case '*' :
			makeMultiplication();
			break;
		case '/' :
			makeDivision();
			break;
		default :
			throw(UnknownCalculationException());
			break;
	}
}

	/*Operation functions*/

void RPN::makeAddition(){
	if(_s.size() < 2)
		throw(WrongArgumentConstruction());
	double i,j;
	i = _s.top();
	_s.pop();
	j = _s.top();
	_s.pop();
	_s.push(j + i);
}
void RPN::makeSubtraction(){
	if(_s.size() < 2)
		throw(WrongArgumentConstruction());
	double i,j;
	i = _s.top();
	_s.pop();
	j = _s.top();
	_s.pop();
	_s.push(j - i);

}
void RPN::makeMultiplication(){
	if(_s.size() < 2)
		throw(WrongArgumentConstruction());
	double i,j;
	i = _s.top();
	_s.pop();
	j = _s.top();
	_s.pop();
	_s.push(j * i);
}
void RPN::makeDivision(){
	if(_s.size() < 2)
		throw(WrongArgumentConstruction());
	double i,j;
	i = _s.top();
	_s.pop();
	j = _s.top();
	_s.pop();
	_s.push(j / i);
}