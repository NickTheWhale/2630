#pragma once
class Stack
{
private:
	int topIndex;
	const static int MAX_SIZE = 100;
	int contents[MAX_SIZE] = {};
public:
	Stack();
	void push(int i);
	int pop();
	int size();
	bool isEmpty();
	bool isFull();
	int peek();
	void clear();
	void print();
};

