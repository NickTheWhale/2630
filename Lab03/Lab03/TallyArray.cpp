#include <iostream>
#include <math.h>

int getSize();
int getNextNumber(int max);
void printTallies(int* tallyArray, int size);

int main() {
	int size = getSize() + 1;
	
	int* tallyArray = new int[size];
	for (int i = 0; i < size; i++) {
		tallyArray[i] = 0;
	}
	
	bool done = false;
	while (!done) {
		int n = getNextNumber(size);
		if (n >= 0 && n < size) {
			tallyArray[n]++;
		}
		else if (n == -1) {
			done = true;
		}
	}

	printTallies(tallyArray, size);

	delete[] tallyArray;

	return 0;
}


int getSize() {
	int size;
	std::cin >> size;
	while (size < 0) {
		std::cout << "Range must be greater than 0!\n";
		std::cin >> size;
	}
	return size;
}

int getNextNumber(int max) {
	int n;
	std::cin >> n;
	while (n > max || n < -1) {
		std::cout << "Invalid input!\n";
		std::cin >> n;
	}
	return n;
}

void printTallies(int* tallyArray, int size) {
	std::cout << "\n";
	std::cout << "Tally of user input:\n";
	for (int i = 0; i < size; i++) {
		if (tallyArray[i] > 0) {
			if (i > 9)
				std::cout << "The number " << i << " occurs   " << tallyArray[i] << " times.\n";
			else
				std::cout << "The number  " << i << " occurs   " << tallyArray[i] << " times.\n";
		}
	}
}