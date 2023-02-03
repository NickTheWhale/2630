#include <iostream>
#include "myStack.hpp"

int main() {

	myStack stack1;
	myStack stack2;

	stack1.push('a');
	stack1.push('b');
	stack1.push('c');

	stack2.push('a');
	stack2.push('b');
	stack2.push('c');

	for (int i = 0; i < stack1.size(); i++) {
		std::cout << "iteration " << i << std::endl;
	}

	return 0;
}