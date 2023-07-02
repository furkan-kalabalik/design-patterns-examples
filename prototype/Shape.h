#ifndef SHAPE_H
#define SHAPE_H

#include <tuple>
#include <memory>

class Shape
{
private:
    int x;
    int y;
    std::tuple<int, int, int> color;
public:
    Shape(int x, int y, std::tuple<int, int, int> color);
    Shape(const Shape& shape);
    virtual std::unique_ptr<Shape> clone() = 0;
    virtual ~Shape();
};


#endif