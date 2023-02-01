#pragma once
#include <iostream>

class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle();
	Rectangle(double, double);
	void setLength(double);
	void setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
	void print();
	Rectangle operator + (Rectangle const& rect);
};

