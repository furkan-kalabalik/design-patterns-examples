#include "HTMLButton.h"
#include <iostream>

HTMLButton::HTMLButton() {
    std::cout << "HTML button created!" << std::endl;
}

void HTMLButton::render()
{
    std::cout << "HTML button rendered!" << std::endl;
}

void HTMLButton::onClick()
{
    std::cout << "HTML button clicked!" << std::endl;
}