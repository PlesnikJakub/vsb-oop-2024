#include "Rectangle.h"

Rectangle::Rectangle(int w, int h)
{
    this->width = w;
    this->height = h;
}

int Rectangle::getWidth()
{
    return this->width;
}

void Rectangle::setWidth(int w)
{
    this->width = w;
}

int Rectangle::getArea()
{
    return this->height * this->width;
}
