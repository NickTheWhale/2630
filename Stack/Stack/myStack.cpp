#include "myStack.hpp"
#include <iostream>
#include <stdio.h>

myStack::myStack() {
	this->topIndex = -1;
}

void myStack::push(char c) {
	if (isFull())
		throw std::string("Stack is full");
	contents[++topIndex] = c;
}

char myStack::pop() {
	if (isEmpty()) {
		throw std::string("Stack is already empty");
	}
	return contents[topIndex--];
}

int myStack::size() {
	return topIndex + 1;
}

bool myStack::isEmpty() {
	return topIndex == -1;
}

bool myStack::isFull() {
	return topIndex + 1 == MAX_SIZE;
}

char myStack::top() {
	if (isEmpty())
		throw std::string("Stack is emtpy");
	return contents[topIndex];
}

void myStack::clear() {
	topIndex = 0;
}

void myStack::print() {
	std::cout << "Stack size: " << this->size() << std::endl;
	for (int i = 0; i < size(); i++) {
		std::cout << "at location " << i << ": " << contents[i] << std::endl;
	}
}