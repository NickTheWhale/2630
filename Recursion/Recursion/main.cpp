#include<iostream>


unsigned long Factorial(unsigned long number) {
	if (number == 0)
		return 1;
	else
		return number * Factorial(number - 1);
}

int sum(int n) {
	if (n == 0)
		return 0;
	return n + sum(n - 1);
}

int main() {
	unsigned long number;
	std::cout << "Enter a number : ";
	std::cin >> number;
	std::cout << "The factorial of your number is: " << Factorial(number) << std::endl;
	std::cout << "The sum of your number is: " << sum(number) << std::endl;
	return 0;
}