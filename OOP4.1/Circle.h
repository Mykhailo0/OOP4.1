#pragma once
#include "Figure.h"
#include <cmath>

class Circle : public Figure {

public:
    Circle(double r);
    double area() override;
    double perimeter() override;
    void display() override;
};

