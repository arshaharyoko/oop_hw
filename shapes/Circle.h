#ifndef H_CIRCLE_SHAPE
#define H_CIRCLE_SHAPE
#include "./Shape.h"

class Circle : public Shape {
    protected:
        double _radius;

    public:
        Circle(double radius);
        double area() const override;
};

#endif