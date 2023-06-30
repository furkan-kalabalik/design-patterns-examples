#include "Dialog.h"
#include <iostream>

void Dialog::render() {
    std::unique_ptr<Button> button = createButton();
    button->onClick();
    button->render();
}