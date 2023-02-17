#pragma once
#include "Stack.hpp"
#include "Queue.hpp"

typedef float operand_t;
#define CHARACTERS_TO_IGNORE (256)
#define TERMINATING_CHARACTER ('#')

class RPNEval
{
private:
	bool _valid;
	operand_t _answer;
	Stack* _stack;
	Queue* _queue;
	void processOperand();
	void processOperator(char c);

public:
	RPNEval();
	~RPNEval();
	void processExpression();
	bool isValid() const;
	operand_t value() const;
	void printIntermediateResults();
	void printAnswer() const;
};

