#include <iostream>
#include <vector>
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
	int count = 0;
	
	while (_valid && !done) {
		char c;
		std::cin >> c;
		if (c >= '0' && c <= '9') {
			std::cin.putback(c);
			processOperand();
		}
		else if (c == '-' || c == '+' || c == '*' || c == '/') {
			processOperator(c);
		}
		else if (c == '#') {
			done = true;
			if (!_stack->isEmpty())
				_answer = _stack->pop();
			else
				_valid = false;
		}
		else {
			_valid = false;
		}
	}
}

void RPNEval::processOperand() {
	Stack::DataType n;
	std::cin >> n;
	_stack->push(n);
}

void RPNEval::processOperator(char c) {
	if (_stack->size() >= 2) {
		Stack::DataType a, b;
		a = _stack->pop();
		b = _stack->pop();
		if (c == '/' && a == 0.0) {
			_valid = false;
		}
		else {
			if (c == '-') {
				_answer = b - a;
			}
			else if (c == '+') {
				_answer = b + a;
			}
			else if (c == '*') {
				_answer = b * a;
			}
			else {
				_answer = b / a;
			}
			_queue->enqueue(_answer);
			_stack->push(_answer);
		}
	}
	else {
		_valid = false;
	}
}

bool RPNEval::isValid() const {
	return _valid;
}

OperandType RPNEval::value() const {
	return _answer;
}

void RPNEval::printIntermediateResults() {
	std::cout << "The Intermediate Results are:";
	while (!_queue->isEmpty()) {
		std::cout << " " << _queue->dequeue();
	}
	std::cout << std::endl;
}

// REMOVE FOR SUBMISSION
Stack* RPNEval::stack() {
	return _stack;
}

Queue* RPNEval::queue() {
	return _queue;
}