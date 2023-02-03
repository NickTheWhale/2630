#pragma once
class Triangle
{
private:
	float sideA;
	float sideB;
	float sideC;
public:
	Triangle();
	Triangle(float sideA, float sideB, float sideC);
	void setSides(float sideA, float sideB, float sideC);
	float perimeter();
	float area();

};

