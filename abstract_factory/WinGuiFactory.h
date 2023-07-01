#ifndef WIN_GUI_FACTORY_H
#define WIN_GUI_FACTORY_H

#include "GUIFactory.h"
#include "WinButton.h"
#include "WinCheckbox.h"

class WinGuiFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override;
    std::unique_ptr<Checkbox> createCheckbox() override;
};

#endif