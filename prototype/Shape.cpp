#include "Shape.h"

Shape::Shape(int x, int y, std::tuple<int, int, int> color) {
    this->x = x;
    this->y = y;
    this->color = color;
}

Shape::Shape(const Shape& shape) {
    this->x = shape.x;
    this->y = shape.y;
    this->color = shape.color;
}

Shape::~Shape(){}