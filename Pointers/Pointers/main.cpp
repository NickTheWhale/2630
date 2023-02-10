#include <iostream>

int func1(int* arr, int size);
void func2(int* arr, int size, int* avg);


int main() {
	const int SIZE = 10;
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int average1;
	average1 = func1(arr, SIZE);

	int average2;
	func2(arr, SIZE, &average2);

	std::cout << "Average1: " << average1 << ", Average2: " << average2 << std::endl;

	return 0;
}

int func1(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

void func2(int* arr, int size, int* avg) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	*avg = sum / size;
}