#include <iostream>
#include "rectangle.hpp"

int main() {

	Rectangle rect1(4, 5);
	Rectangle rect2(6, 2);

	rect1.print();
	rect2.print();

	Rectangle rect3 = rect1 + rect2;

	rect3.print();

	return 0;
}