#pragma once
class myStack
{
private:
	int topIndex;
	const static int MAX_SIZE = 100;
	char contents[MAX_SIZE] = {};
public:
	myStack();
	void push(char c);
	char pop();
	int size();
	bool isEmpty();
	bool isFull();
	char top();
	void clear();
	void print();
};

