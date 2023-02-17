#pragma once
class Queue
{
public:
	typedef float DataType;
	Queue(int size = DEFAULT_SIZE);
	~Queue();
	void enqueue(DataType i);
	DataType dequeue();
	int size();
	bool isEmpty();
	bool isFull();
	DataType front();
	DataType rear();
	void print();

private:
	const static int DEFAULT_SIZE = 1000;
	DataType* _contents;
	int _front;
	int _rear;
	int _currentSize;
	int _maxSize;
};