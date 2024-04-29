#pragma once
#include "Shape.h"
#include <string>

class Rectangle : public Shape
{
private:
	double lenght;
	double width;
public:
	Rectangle(double l, double w, std::string c);
	double GetArea() override;
	std::string ToString();
};

