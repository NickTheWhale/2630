#include "Queue.hpp"
#include <string>
#include <iostream>

Queue::Queue(int size) {
	_contents = new item_t[size];
	_front = 0;
	_rear = -1;
	_currentSize = 0;
	_maxSize = size;
}

Queue::~Queue() {
	delete[] _contents;
}

void Queue::enqueue(Queue::item_t i) {
	if (isFull())
		throw std::string("Queue is full");
	_contents[++_rear] = i;
	++_currentSize;
}

Queue::item_t Queue::dequeue() {
	if (isEmpty())
		throw std::string("Queue is empty");
	--_currentSize;
	return _contents[_front++];
}

int Queue::size() {
	return _currentSize;
}

bool Queue::isEmpty() {
	return size() == 0;
}

bool Queue::isFull() {
	return size() == _maxSize;
}

Queue::item_t Queue::front() {
	if (isEmpty())
		throw std::string("Queue is empty");
	return _contents[_front];
}

Queue::item_t Queue::rear() {
	if (isFull())
		throw std::string("Queue is full");
	return _contents[_rear];
}

void Queue::print() {
	std::cout << "Queue size: " << size() << std::endl;
	for (int i = 0; i < size(); i++) {
		std::cout << "location: " << i << ": " << _contents[i] << std::endl;
	}
}