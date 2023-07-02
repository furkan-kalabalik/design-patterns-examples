#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main(int argc, char const *argv[])
{
    Rectangle rect{3,4};
    std::unique_ptr<Shape> rect_clone = rect.clone();
    std::cout << "Original rect properties:\n--------------------------\n";
    std::cout << rect << std::endl;
    std::cout << "Clone rect properties:\n--------------------------\n";
    std::cout << *(dynamic_cast<Rectangle*>(rect_clone.get())) << std::endl;

    Circle circ{5};
    std::unique_ptr<Shape> circ_clone = circ.clone();
    std::cout << "Original circ properties:\n--------------------------\n";
    std::cout << circ << std::endl;
    std::cout << "Clone circ properties:\n--------------------------\n";
    std::cout << *(dynamic_cast<Circle*>(circ_clone.get())) << std::endl;
    return 0;
}
