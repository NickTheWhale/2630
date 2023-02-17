#pragma once

class Stack
{
public:
	typedef float item_t;
	Stack(int size = DEFUALT_SIZE);
	~Stack();
	void push(item_t i);
	item_t pop();
	int size();
	bool isEmpty();
	bool isFull();
	item_t peek();
	void clear();
	void print();

private:
	const static int DEFUALT_SIZE = 1000;
	item_t* _contents;
	int _topIndex;
	int _maxSize;
};

