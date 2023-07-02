#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int width, int height, int x, int y, std::tuple<int, int, int> color) 
    : Shape{x, y, color}
{
    this->width = width;
    this->height = height;
}

Rectangle::Rectangle(const Rectangle& rectangle) : Shape{rectangle} {
    this->height = rectangle.height;
    this->width = rectangle.width;
}

std::unique_ptr<Shape> Rectangle::clone() {
    return std::make_unique<Rectangle>(*this);
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "Rectangle height: " << rect.height << std::endl;
    os << "Rectangle width: " << rect.width << std::endl;
    return os;
}