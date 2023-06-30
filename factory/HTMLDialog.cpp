#include "HTMLDialog.h"
#include "HTMLButton.h"

#include <iostream>

HTMLDialog::HTMLDialog() {
    std::cout << "HTML dialog created" << std::endl;
}

std::unique_ptr<Button> HTMLDialog::createButton() {
    return std::make_unique<HTMLButton>();
}