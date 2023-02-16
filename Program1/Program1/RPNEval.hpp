#pragma once
#include "Stack.hpp"
#include "Queue.hpp"

typedef float OperandType;

class RPNEval
{
private:
	bool _valid;
	OperandType _answer;
	Stack* _stack;
	Queue* _queue;
	void processOperand();
	void processOperator(char c);
public:
	RPNEval();
	~RPNEval();
	void processExpression();
	bool isValid() const;
	OperandType valid() const;
	void printIntermediateResults();

	// REMOVE FOR SUBMISSION
	Stack* stack();
};

