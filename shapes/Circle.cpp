#include "./Circle.h"

Circle::Circle(double radius) {
    _radius = radius;
}

double Circle::area() {
    return 3.1415926535*_radius*_radius;
}