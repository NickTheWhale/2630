#include "Queue.hpp"
#include <string>
#include <iostream>

Queue::Queue(int size) {
	contents = new int[size];
	front = 0;
	rear = -1;
	currentSize = 0;
	maxSize = size;
}

Queue::~Queue() {
	delete[] contents;
}

void Queue::enqueue(int i) {
	if (isFull())
		throw std::string("Queue is full");
	++currentSize;
	contents[rear++] = i;
}

int Queue::dequeue() {
	if (isEmpty())
		throw std::string("Queue is empty");
	--currentSize;
	return contents[front++];
}

int Queue::size() {
	return currentSize;
}

bool Queue::isEmpty() {
	return size() == 0;
}

bool Queue::isFull() {
	return size() == maxSize;
}

int Queue::peek() {
	if (isEmpty())
		throw std::string("Queue is empty");
	return contents[front];
}

void Queue::print() {
	std::cout << "Queue size: " << size() << std::endl;
	for (int i = 0; i < size(); i++) {
		std::cout << "location: " << i << ": " << contents[i] << std::endl;
	}
}