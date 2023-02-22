#pragma once

typedef struct Node {
	int length;
	int* next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void makeEmpty();
	int getLength() const;

	bool addNode();
	bool deleteNode();

	void print() const;

private:
	int* head;
	int length;
};

