#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <ostream>

class Rectangle : public Shape {
private:
    int width;
    int height;
public:
    Rectangle(int width=0, int height=0, int x=0, int y=0, std::tuple<int, int, int> color = std::make_tuple(255,255,255));
    Rectangle(const Rectangle& rectangle);
    std::unique_ptr<Shape> clone();
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
};

#endif