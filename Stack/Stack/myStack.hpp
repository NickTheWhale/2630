#pragma once
class myStack
{
private:
	int topIndex;
	const static int MAX_SIZE = 100;
	char* contents;
public:
	myStack();
	void push(char c);
	char pop();
	int size();
	bool isEmpty();
	bool isFull();
	char top();
	void clear();
	char peek();
	void print();
};

