#include "Triangle.hpp"
#include <math.h>
#include <iostream>
#include <algorithm>
Triangle::Triangle() {
	sideA = 0;
	sideB = 0;
	sideC = 0;
}

Triangle::Triangle(float sideA, float sideB, float sideC) {
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
}

void Triangle::setSides(float sideA, float sideB, float sideC) {
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
}

float Triangle::perimeter() {
	return sideA + sideB + sideC;
}

float Triangle::area() {
	const int SIZE = 3;
	float sides[SIZE] = { sideA, sideB, sideC };
	float* first(&sides[0]);
	float* last(first + SIZE);

	float a = sides[2];
	float b = sides[1];
	float c = sides[0];


	float C = acos(((a * a) + (b * b) - (c * c)) / (2 * a * b));
	std::cout << C;
	float area = 0.5f * a * b * sin(C);

	return area;
}