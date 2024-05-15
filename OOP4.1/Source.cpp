#include "Circle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include <iostream>
#include <cmath>

int main() {
    const int SIZE = 3;
    Figure* figures[SIZE];
    figures[0] = new Circle(5.0);
    figures[1] = new Rectangle(4.0, 6.0);
    figures[2] = new Trapezoid(3.0, 7.0, 5.0);

    for (int i = 0; i < SIZE; i++) {
        figures[i]->display();
        std::cout << "Type of figure: " << typeid(*(figures[i])).name() << std::endl;
        std::cout << "Area: " << figures[i]->area() << ", Perimeter: " << figures[i]->perimeter() << std::endl << std::endl;
    }

    for (int i = 0; i < SIZE; i++) {
        delete figures[i];
    }

    return 0;
}
