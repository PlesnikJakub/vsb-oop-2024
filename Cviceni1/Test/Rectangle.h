#pragma once
class Rectangle
{
private:
	int width;
	int height;
public:
	// constructor
	Rectangle(int w, int h);

	// getter
	int getWidth();

	// setter
	void setWidth(int w);

	// method
	int getArea();
};

