#pragma once

typedef float DataType;

class Stack
{
private:
	int topIndex;
	const static int MAX_SIZE = 100;
	int contents[MAX_SIZE] = {};
public:
	Stack();
	~Stack();
	void push(DataType i);
	DataType pop();
	int size();
	bool isEmpty();
	bool isFull();
	DataType peek();
	void clear();
	void print();
};

