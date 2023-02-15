#include "Stack.hpp"
#include <string>
#include <iostream>

Stack::Stack() {
	topIndex = -1;
}

void Stack::push(int i) {
	if (isFull())
		throw std::string("Stack is full");
	contents[++topIndex] = i;
}

int Stack::pop() {
	if (isEmpty())
		throw std::string("Stack is empty");
	return contents[topIndex--];
}

int Stack::size() {
	return topIndex + 1;
}

bool Stack::isEmpty() {
	return topIndex == -1;
}

bool Stack::isFull() {
	return topIndex + 1 == MAX_SIZE;
}

int Stack::peek() {
	if (isEmpty())
		throw std::string("Stack is empty");
	return contents[topIndex];
}

void Stack::clear() {
	topIndex = -1;
}

void Stack::print() {
	std::cout << "Stack size: " << size() << std::endl;
	for (int i = 0; i < size(); i++) {
		std::cout << "location: " << i << ": " << contents[i] << std::endl;
	}
}