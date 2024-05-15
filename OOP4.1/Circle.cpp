#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>



Circle::Circle(double r)
{
    a = r;
}

double Circle::area() {
    return M_PI * pow(a, 2);
}

double Circle::perimeter() {
    return 2 * M_PI * a;
}

void Circle::display() {
    std::cout << "Circle with a: " << a << std::endl;
}
