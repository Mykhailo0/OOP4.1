#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double w, double h) {
    a = w;
    height = h;

}

double Rectangle::area() {
    return a * height;
}

double Rectangle::perimeter() {
    return 2 * (a + height);
}

void Rectangle::display() {
    std::cout << "Rectangle with a: " << a << " and height: " << height << std::endl;
}
