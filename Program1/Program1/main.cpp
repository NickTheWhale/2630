#include <iostream>
#include "RPNEval.hpp"

int main() {
	int iterations;
	std::cin >> iterations;
	
	for (int i = 0; i < iterations; i++) {
		std::cout << "Expression " << i + 1 << ":" << std::endl;
		RPNEval rpn;
		rpn.processExpression();
		rpn.printAnswer();
		rpn.printIntermediateResults();
	}

	std::cout << "Normal Termination of Program 1!" << std::endl;
	return 0;
}