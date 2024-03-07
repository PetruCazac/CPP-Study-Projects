#ifndef STACK_HPP
#define STACK_HPP

#include <stack>

union Element{
	double	d;
	char	c;
};

class Stack {
private:
	std::stack<Element> _s;

public:
	Stack();
	~Stack();
	Stack(const Stack& s);
	Stack& operator=(const Stack& s);
	
	Element& top();
	void push(const Element& e);
	void pop();
	std::size_t size();
};

#endif