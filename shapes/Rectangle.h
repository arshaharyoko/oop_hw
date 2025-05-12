#ifndef H_RECTANGLE_SHAPE
#define H_RECTANGLE_SHAPE
#include "./Shape.h"

class Rectangle : public Shape {
    protected:
        double _length, _width;

    public:
        Rectangle(double length, double width);
        double area() const override;
};

#endif