#include "WinGuiFactory.h"

std::unique_ptr<Button> WinGuiFactory::createButton() {
    return std::make_unique<WinButton>();
}

std::unique_ptr<Checkbox> WinGuiFactory::createCheckbox() {
    return std::make_unique<WinCheckbox>();
}