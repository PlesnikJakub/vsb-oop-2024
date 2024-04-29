#pragma once
#include <string>
#include "Printable.h"

// Abstract
class Shape : public Printable
{
private:
	std::string color;
public:
	Shape(std::string c);
	virtual void Foo(); // virtual
	virtual double GetArea() = 0; // pure virtual 
};

