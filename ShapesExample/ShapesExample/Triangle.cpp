#include "Triangle.h"

Triangle::Triangle(double b, double h, std::string c) : Shape (c)
{
	this->base = b;
	this->height = h;  
}

double Triangle::GetArea()
{
	return (this->base*this->height)/2;
}

// Printable 
std::string Triangle::ToString()
{
	return "I am Triangle";
}

