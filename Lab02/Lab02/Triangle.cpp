#include "Triangle.hpp"
#include <math.h>

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
	float a = sideA;
	float b = sideB;
	float c = sideC;

	float s = (a + b + c) / 2.0f;
	float area = sqrt(s * (s - a) * (s - b) * (s - c));

	return area;
}