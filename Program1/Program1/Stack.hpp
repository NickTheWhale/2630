#pragma once

class Stack
{
public:
	typedef float DataType;
	Stack(int size = DEFUALT_SIZE);
	~Stack();
	void push(DataType i);
	DataType pop();
	int size();
	bool isEmpty();
	bool isFull();
	DataType peek();
	void clear();
	void print();

private:
	const static int DEFUALT_SIZE = 1000;
	DataType* _contents;
	int _topIndex;
	int _maxSize;
};

