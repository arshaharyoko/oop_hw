#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
    Rectangle rect(10.0, 5.0);
    Rectangle rect1(2.5, 5.0);
    Circle circ(2.5);
    Circle circ1(5.0);
    Circle circ2(7.5);

    Shape* shapes[5] = {&rect, &rect1, &circ, &circ1, &circ2};

    for(auto shape : shapes) {
        std::cout << "Shape area: " << shape->area() << std::endl;
    }

    return 0;
}