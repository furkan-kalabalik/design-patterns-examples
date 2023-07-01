#ifndef MAC_GUI_FACTORY_H
#define MAC_GUI_FACTORY_H

#include "GUIFactory.h"
#include "MacButton.h"
#include "MacCheckbox.h"

class MacGuiFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override;
    std::unique_ptr<Checkbox> createCheckbox() override;
};

#endif