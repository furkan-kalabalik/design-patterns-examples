#include "WindowsButton.h"
#include <iostream>

WindowsButton::WindowsButton() {
    std::cout << "Windows button created!" << std::endl;
}

void WindowsButton::render()
{
    std::cout << "Windows button rendered!" << std::endl;
}

void WindowsButton::onClick()
{
    std::cout << "Windows button clicked!" << std::endl;
}