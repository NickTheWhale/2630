#pragma once
class Queue
{
public:
	typedef float item_t;
	Queue(int size = DEFAULT_SIZE);
	~Queue();
	void enqueue(item_t i);
	item_t dequeue();
	int size();
	bool isEmpty();
	bool isFull();
	item_t front();
	item_t rear();
	void print();

private:
	const static int DEFAULT_SIZE = 1000;
	item_t* _contents;
	int _front;
	int _rear;
	int _currentSize;
	int _maxSize;
};