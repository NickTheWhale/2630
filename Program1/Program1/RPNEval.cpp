#include <iostream>

#include "RPNEval.hpp"

RPNEval::RPNEval() {
	_valid = true;
	_answer = 0;
	_stack = new Stack;
	_queue = new Queue;
}

RPNEval::~RPNEval() {
	delete _stack;
	delete _queue;
}

void RPNEval::processExpression() {
	bool done = false;
	while (_valid && !done) {
		char c;
		std::cin >> c;
		if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0') {
			std::cin.putback(c);
			processOperand();
		}
		else if (c == '-' || c == '+' || c == '*' || c == '/') {
			processOperator(c);
		}
		else if (c == '#') {
			done = true;
		}
		else {
			_valid = false;
		}
	}
}

void RPNEval::processOperand() {
	float n;
	std::cin >> n;
	_stack->push(n);
}

void RPNEval::processOperator(char c) {
	DataType a, b, r;
	a = _stack->pop();
	b = _stack->pop();
	if (c == '-') r = b - a;
	else if (c == '+') r = b + a;
	else if (c == '*') r = b * a;
	else r = b / a;
	_stack->push(r);
}

bool RPNEval::isValid() const {
	return false;
}

OperandType RPNEval::valid() const {
	return 0;
}

void RPNEval::printIntermediateResults() {

}

// REMOVE FOR SUBMISSION
Stack*RPNEval::stack() {
	return _operands;
}