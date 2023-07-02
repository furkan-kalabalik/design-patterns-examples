#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <ostream>

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int radius=0, int x=0, int y=0, std::tuple<int, int, int> color = std::make_tuple(255,255,255));
    Circle(const Circle& circle);
    std::unique_ptr<Shape> clone();
    friend std::ostream& operator<<(std::ostream& os, const Circle& circle);
};

#endif