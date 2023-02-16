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
	char operand;
	std::cin >> operand;
	_stack->push(operand);
}

void RPNEval::processOperator(char c) {
	_stack->push(c);
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
	return _stack;
}