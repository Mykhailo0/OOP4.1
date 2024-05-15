#pragma once

#include "Figure.h"
#include <cmath>

class Trapezoid : public Figure {
private:
    double base2, height;
public:
    Trapezoid(double b1, double b2, double h);
    double area() override;
    double perimeter() override;
    void display() override;
};
