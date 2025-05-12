#include "./Rectangle.h"

Rectangle::Rectangle(double length, double width) {
    _length = length;
    _width = width;
}

double Rectangle::area() const {
    return _width*_length;
}