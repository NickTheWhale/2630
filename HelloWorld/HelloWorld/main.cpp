#include<iostream>

int main() {

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

	return 0;
}