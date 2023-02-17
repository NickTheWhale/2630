#include <iostream>
#include "RPNEval.hpp"

int main() {
	int iterations;
	std::cin >> iterations;
	
	for (int i = 0; i < iterations; i++) {
		std::cout << "Expression " << i + 1 << ":" << std::endl;
		RPNEval rpn;
		rpn.processExpression();
		if (rpn.isValid())
			std::cout << "The value is: " << rpn.value() << std::endl;
		else
			std::cout << "Invalid Expression" << std::endl;
		rpn.printIntermediateResults();
		std::cout << std::endl;
		std::cin.ignore(256, '\n');
	}

	std::cout << "Normal Termination of Program 1!" << std::endl;
	return 0;
}