#include <iostream>
#include <math.h>

int combination(int n, int r);

int combinationRecursive(int n, int r);

int main(int argc, char* argv) {

	std::cout << combination(5, 3);

	return 0;
}

int combination(int n, int r) {
	int n_fact = 0;
	for (int i = 0; i < n; i++) {
		n_fact *= i;
	}

	int r_fact = 0;
	for (int i = 0; i < r; i++) {
		r_fact *= i;
	}

	int n_r_fact = 0;
	for (int i = 0; i < n - r; i++) {
		n_r_fact *= i;
	}

	return n_fact / (r_fact * n_r_fact);
}

int combinationRecursive(int n, int r) {
	return 0;
}