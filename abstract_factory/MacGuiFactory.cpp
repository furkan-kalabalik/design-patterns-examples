#include "MacGuiFactory.h"

std::unique_ptr<Button> MacGuiFactory::createButton() {
    return std::make_unique<MacButton>();
}

std::unique_ptr<Checkbox> MacGuiFactory::createCheckbox() {
    return std::make_unique<MacCheckbox>();
}