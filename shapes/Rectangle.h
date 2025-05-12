#ifndef H_RECTANGLE_SHAPE
#define H_RECTANGLE_SHAPE
#include "./Shape.h"

class Rectangle:Shape {
    protected:
        double _length, _width;

    public:
        Rectangle(double length, double width);
        double area();
};

#endif