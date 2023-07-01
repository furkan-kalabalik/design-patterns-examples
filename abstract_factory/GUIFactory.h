#ifndef GUI_FACTORY_H
#define GUI_FACTORY_H

#include "Button.h"
#include "Checkbox.h"
#include <memory>

class GUIFactory {
public:
    virtual std::unique_ptr<Button> createButton() = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() = 0;
};

#endif