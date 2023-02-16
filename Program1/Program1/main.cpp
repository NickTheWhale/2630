#include <iostream>
#include "RPNEval.hpp"

int main() {
	/*int iterations;
	std::cout << "Enter iterations: " << std::endl;
	std::cin >> iterations;*/

	RPNEval rpn;
	rpn.processExpression();
	Stack* s = rpn.stack();
	s->print();

	/*for (int i = 0; i < iterations; i++) {
		RPNEval rpn;
		rpn.processExpression();
	}*/

	return 0;
}