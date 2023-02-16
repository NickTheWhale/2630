#pragma once
class Queue
{
private:
	const static int DEFAULT_SIZE = 1000;
	int _front;
	int _rear;
	int _currentSize;
	int _maxSize;
	int* _contents;
public:
	Queue(int size = DEFAULT_SIZE);
	~Queue();
	void enqueue(int i);
	int dequeue();
	int size();
	bool isEmpty();
	bool isFull();
	int front();
	int rear();
	void print();
};