#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>

int main()
{
    std::cout << "Hello Shapes!\n";

    Rectangle* r = new Rectangle(2, 3, "RED");
    Triangle* t = new Triangle(2, 5, "BLUE");

    // TODO
    std::cout << r->GetArea() << std::endl;
    std::cout << r->ToString() << std::endl;

    std::cout << std::endl;
    std::cout << "Polymorfni prirazeni!\n";
    Shape* s = r;
    std::cout << s->ToString() << std::endl;
    std::cout << std::endl;

    std::cout << "Polymorfni struktura!\n";
    std::vector<Shape*> shapes;
    shapes.push_back(r);
    shapes.push_back(t);

    for (Shape * shape : shapes)
    {
        std::cout << shape->ToString() << std::endl;
    }

    // Not allowed // Abstract
    // Shape* s2 = new Shape("GREEN");
    // s2->GetArea();

    delete r, t;
}
