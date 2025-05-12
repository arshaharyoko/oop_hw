#ifndef H_CIRCLE_SHAPE
#define H_CIRCLE_SHAPE
#include "./Shape.h"

class Circle:Shape {
    protected:
        double _radius;

    public:
        Circle(double radius);
        double area();
};

#endif