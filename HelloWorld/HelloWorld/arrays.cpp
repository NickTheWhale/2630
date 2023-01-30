#include<iostream>

const int SIZE = 5;
float numbers[SIZE];

int printAndSelectOption() {
	std::cout << "Select an option:\n";
	std::cout << "    1. Enter five floating - point values to store in an array\n";
	std::cout << "    2. Calculate the average value of the floating - point array\n";
	std::cout << "    3. Exit the program\n";
	int selection;
	std::cin >> selection;
	return selection;
}

void fillArray() {
	std::cout << "Enter 5 numbers to store to the array\n";
	for (int i = 0; i < SIZE; i++) {
		std::cin >> numbers[i];
	}
}

void calculateAverage() {
	float sum = 0;
	for (float number : numbers) {
		sum += number;
	}
	std::cout << "The average of the array is " << sum / SIZE << '\n';
}

void arrayAverageMenu() {
	bool running = true;
	bool arrayFilled = false;
	while (running) {
		int selection = printAndSelectOption();
		switch (selection) {
		case 1:
			fillArray();
			arrayFilled = true;
			break;
		case 2:
			if (arrayFilled)
				calculateAverage();
			else
				std::cout << "Please enter 5 numbers before averaging\n";
			break;
		case 3:
			running = false;
			break;
		default:
			std::cout << "Please enter a valid option\n";
		}
		std::cout << "\n\n";
	}
}