#include <iostream>
#include "myStack.hpp"

bool validateExpression(myStack s1, myStack s2);

int main() {

	myStack openSymbols;
	myStack closeSymbols;

	char c;
	std::cout << "Enter an expression: " << std::endl;
	std::cin.get(c);

	while (c != '\n') {
		if (c == '{' || c == '[' || c == '(') {
			openSymbols.push(c);
		}
		else if (c == '}' || c == ']' || c == ')') {
			closeSymbols.push(c);
		}
		std::cin.get(c);
	}

	if (validateExpression(openSymbols, closeSymbols)) {
		std::cout << "The expression is valid" << std::endl;
	}
	else {
		std::cout << "The expression is invalid" << std::endl;
	}

	return 0;
}

bool validateExpression(myStack openStack, myStack closedStack) {
	if (openStack.size() != closedStack.size())
		return false;
	
	char open;
	char closed;
	for (int i = 0; i < openStack.size(); i++) {
		open = openStack.pop();
		closed = closedStack.pop();
		switch (open) {
		case '{':
			if (closed != '}')
				return false;
		case '[':
			if (closed != ']')
				return false;
		case '(':
			if (closed != ')')
				return false;
		}
	}
	return true;
}