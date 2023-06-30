#include "WindowsDialog.h"
#include "WindowsButton.h"

#include <iostream>
#include <memory>
WindowsDialog::WindowsDialog() {
    std::cout << "Windows dialog created" << std::endl;
}

std::unique_ptr<Button> WindowsDialog::createButton() {
    return std::make_unique<WindowsButton>();
}