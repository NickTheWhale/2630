#include <iostream>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main(int argc, char* argv[]) {
	const int SIZE = 10;
	int arr[SIZE] = {5, 6, 8, 3, 4, 8, 1 ,0, 8, 5};

	printArray(arr, SIZE);

	bubbleSort(arr, SIZE);

	printArray(arr, SIZE);
}

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			int temp = arr[i];
			arr[i + 1] = arr[i];
			arr[i] = temp;
		}
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << std::endl;
}