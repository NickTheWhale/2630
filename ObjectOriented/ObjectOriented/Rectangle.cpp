#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle() {
	this->width = 1;
	this->length = 1;
}

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}

void Rectangle::setLength(double length) {
	this->length = length;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::getLength() {
	return this->length;
}

double Rectangle::getWidth() {
	return this->width;
}

double Rectangle::getArea() {
	return this->width * this->length;
}

void Rectangle::print() {
	std::cout << "Length: " << this->length << ", Width: " << this->width << std::endl;
}

Rectangle Rectangle::operator+(Rectangle const& rect)
{
	Rectangle res;
	res.width = this->width + rect.width;
	res.length = this->length + rect.length;
	return res;
}
