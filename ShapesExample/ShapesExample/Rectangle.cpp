#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, std::string c) : Shape(c)
{
	this->lenght = l;
	this->width = w;
}

double Rectangle::GetArea()
{
	return this->lenght * this->width;
}

std::string Rectangle::ToString()
{
	return "I am Rectangle => width:" + std::to_string(this->width) + " and lenght " + std::to_string(this->lenght);
}
