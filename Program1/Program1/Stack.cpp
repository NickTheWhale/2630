#include "Stack.hpp"
#include <string>
#include <iostream>

Stack::Stack(int size) {
	_contents = new item_t[size];
	_topIndex = -1;
	_maxSize = size;
}

Stack::~Stack() {
	delete[] _contents;
}

void Stack::push(Stack::item_t i) {
	if (isFull())
		throw std::string("Stack is full");
	_contents[++_topIndex] = i;
}

Stack::item_t Stack::pop() {
	if (isEmpty())
		throw std::string("Stack is empty");
	return _contents[_topIndex--];
}

int Stack::size() {
	return _topIndex + 1;
}

bool Stack::isEmpty() {
	return _topIndex == -1;
}

bool Stack::isFull() {
	return _topIndex + 1 == _maxSize;
}

Stack::item_t Stack::peek() {
	if (isEmpty())
		throw std::string("Stack is empty");
	return _contents[_topIndex];
}

void Stack::clear() {
	_topIndex = -1;
}

void Stack::print() {
	std::cout << "Stack size: " << size() << std::endl;
	for (int i = 0; i < size(); i++) {
		std::cout << "location: " << i << ": " << _contents[i] << std::endl;
	}
}