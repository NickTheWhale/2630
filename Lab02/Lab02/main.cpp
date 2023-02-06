#include <iostream>	
#include <iomanip>	
#include "Triangle.hpp"

int main() {
	std::cout << std::fixed << std::setprecision(2);
	
	float a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "Triangle side lengths: " << a << ", " << b << ", " << c << std::endl;
	
	Triangle triangle;
	triangle.setSides(a, b, c);

	std::cout << "Triangle perimeter: " << triangle.perimeter() << std::endl;
	std::cout << "Triangle area: " << triangle.area() << std::endl;

	return 0;
}