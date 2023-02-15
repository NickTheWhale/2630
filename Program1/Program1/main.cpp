#include <iostream>
#include "Stack.hpp"
#include "Queue.hpp"


int main() {
	/*Stack stack;
	Queue q;

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);

	q.print();*/

	std::cout << "Enter size: " << std::endl;
	int size;
	std::cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		std::cout << "enter an integer: ";
		int index;
		std::cin >> index;
		if (index < size)
			arr[index]++;
	}

	for (int i = 0; i < size; i++) {
		std::cout << "location " << i << ": " << arr[i] << std::endl;
	}

	delete[] arr;

	return 0;
}