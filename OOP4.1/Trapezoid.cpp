#include "Trapezoid.h"
#include <iostream>

Trapezoid::Trapezoid(double b1, double b2, double h) {
    a = b1;
    base2 = b2;
    height = h;

}

double Trapezoid::area() {
    return ((a + base2) / 2) * height;
}

double Trapezoid::perimeter() {
    return a + base2 + 2 * sqrt(pow(height, 2) + pow((base2 - a) / 2, 2));
}

void Trapezoid::display() {
    std::cout << "Trapezoid with bases: " << a << " and " << base2 << " and height: " << height << std::endl;
}
