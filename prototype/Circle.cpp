#include "Circle.h"
#include <iostream>

Circle::Circle(int radius, int x, int y, std::tuple<int, int, int> color) 
    : Shape{x, y, color}
{
    this->radius = radius;
}

Circle::Circle(const Circle& circle) : Shape{circle} {
    this->radius = circle.radius;
}

std::unique_ptr<Shape> Circle::clone() {
    return std::make_unique<Circle>(*this);
}

std::ostream& operator<<(std::ostream& os, const Circle& circ) {
    os << "Circle radius: " << circ.radius << std::endl;
    return os;
}