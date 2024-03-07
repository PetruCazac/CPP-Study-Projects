#include "Stack.hpp"

Stack::Stack(){}
Stack::~Stack(){}
Stack::Stack(const Stack& s){
	_s = s._s;
}
Stack& Stack::operator=(const Stack& s){
	_s = s._s;
	return *this;
}

	/*Override functions*/

Element& Stack::top(){
	return _s.top();
}
void Stack::push(const Element& e){
	_s.push(e);
}
void Stack::pop(){
	return _s.pop();
}
std::size_t Stack::size(){
	return _s.size();
}