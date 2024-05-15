#pragma once

#include "Figure.h"

class Rectangle : public Figure {
private:
    double height;
public:
    Rectangle(double w, double h);
    double area() override;
    double perimeter() override;
    void display() override;
};
