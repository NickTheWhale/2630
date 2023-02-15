#pragma once
class Queue
{
private:
	const static int DEFAULT_SIZE = 1000;
	int front;
	int rear;
	int currentSize;
	int maxSize;
	int* contents;
public:
	Queue(int size = DEFAULT_SIZE);
	~Queue();
	void enqueue(int i);
	int dequeue();
	int size();
	bool isEmpty();
	bool isFull();
	int peek();
	void print();
};