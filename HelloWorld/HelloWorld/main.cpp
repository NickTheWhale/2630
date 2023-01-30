#include<iostream>
#include<chrono>
#include<thread>

struct input_t {
	int num1;
	int num2;
	int num3;
};

struct twoNumbers {
	float num1;
	float num2;
};

twoNumbers promptTwoNumbers();

void displayQuotient(twoNumbers numbers);

void sizeOfVariables();

void mathOperators();

input_t promptThreeNumbers();

int sum(input_t numbers);

void displaySum(input_t numbers);

void displayBackslashR();



int main() {

	//sizeOfVariables();

	//mathOperators();

	//input_t numbers = promptThreeNumbers();
	
	//displaySum(numbers);

	//twoNumbers numbers = promptTwoNumbers();
	//displayQuotient(numbers);

	displayBackslashR();
	
	return 0;
}

twoNumbers promptTwoNumbers() {
	std::cout << "Enter two numbers: ";
	twoNumbers numbers;
	std::cin >> numbers.num1 >> numbers.num2;
	return numbers;
}

void displayQuotient(twoNumbers numbers) {
	std::cout << "The quotient of " << numbers.num1 << " and " << numbers.num2 << " is " << numbers.num1 / numbers.num2;
}

void sizeOfVariables() {
	char charVar;
	std::cout << "Enter a char: ";
	std::cin >> charVar;
	std::cout << "Size of the entered char: " << sizeof(charVar) << '\n';
	std::cout << "\n\n";

	float floatVar;
	std::cout << "Enter a float: ";
	std::cin >> floatVar;
	std::cout << "Size of the entered float: " << sizeof(floatVar) << '\n';
	std::cout << "\n\n";

	int intVar;
	std::cout << "Enter a int: ";
	std::cin >> intVar;
	std::cout << "Size of the entered int:  " << sizeof(intVar) << '\n';
	std::cout << "\n\n";

	double doubleVar;
	std::cout << "Enter a double: ";
	std::cin >> doubleVar;
	std::cout << "Size of the entered double: " << sizeof(doubleVar) << '\n';
}

void mathOperators() {
	int num1, num2;
	std::cout << "Enter two integers: ";
	std::cin >> num1 >> num2;
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
	std::cout << num1 << " / " << num2 << " = " << num1 / num2;
}

input_t promptThreeNumbers() {
	input_t numbers;
	std::cout << "Enter three integers: ";
	std::cin >> numbers.num1 >> numbers.num2 >> numbers.num3;
	return numbers;
}

int sum(input_t numbers) {
	return numbers.num1 + numbers.num2 + numbers.num3;
}

void displaySum(input_t numbers) {
	std::cout << "The sum of " << numbers.num1 << ", " << numbers.num2 << ", " << numbers.num3 << ", is " << sum(numbers);
}

void displayBackslashR() {
	for (int i = 0; i < 10000; i++) {
		std::cout << "iteration: " << i << "\r";
		std::this_thread::sleep_for(std::chrono::microseconds(10));
	}
}