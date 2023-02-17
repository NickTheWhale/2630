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
			std::cout << c << " ";
			processOperator(c);
		}
		else if (c == TERMINATING_CHARACTER) {
			done = true;
		}
		else {
			std::cout << c << " ";
			_valid = false;
		}
	}
	std::cin.ignore(CHARACTERS_TO_IGNORE, '\n');
	std::cout << std::endl;
	if (_stack->size() == 1)
		_answer = _stack->pop();
	else
		_valid = false;
}

void RPNEval::processOperand() {
	Stack::item_t operand;
	std::cin >> operand;
	std::cout << operand << " ";
	_stack->push(operand);
}

void RPNEval::processOperator(char c) {
	if (_stack->size() >= 2) {
		Stack::item_t a, b;
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

operand_t RPNEval::value() const {
	return _answer;
}

void RPNEval::printIntermediateResults() {
	std::cout << "The Intermediate Results are: ";
	while (!_queue->isEmpty()) {
		std::cout << _queue->dequeue() << " ";
	}
	std::cout << std::endl << std::endl;
}

void RPNEval::printAnswer() const {
	if (isValid())
		std::cout << "The value is: " << value() << std::endl;
	else
		std::cout << "Invalid Expression" << std::endl;
}