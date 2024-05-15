//figure.h
#pragma once

class Figure {
protected:
    double a;
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void display() = 0;
};
