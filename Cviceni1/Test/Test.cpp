#include <iostream>
#include "Rectangle.h"
#include "User.h"

struct RectangleStr {
    int height;
    int width;
};

int getArea(int w, int h)
{
    return w * h;
}

using namespace std;

int main()
{
    cout << "Hello World!\n";

    RectangleStr r1;
    r1.height = 5;
    r1.width = 2;

    cout << "Area: " << getArea(r1.height, r1.width) << endl;

    Rectangle* rec = new Rectangle(5,2);
    cout << "Area: " << rec->getArea() << endl;

    User* jakub = new User();
    jakub->getFullName();

    User* tomas = new User();
    tomas->getFullName();

    delete rec;
}
