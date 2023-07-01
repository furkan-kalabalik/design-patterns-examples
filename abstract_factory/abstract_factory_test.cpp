#include <iostream>
#include "WinGuiFactory.h"
#include "MacGuiFactory.h"

typedef enum {
    WIN,
    MAC
} OS_type;

int main(int argc, char const *argv[])
{
    OS_type os = WIN;
    std::unique_ptr<GUIFactory> guiFactory {};
    std::unique_ptr<Button> button {};
    std::unique_ptr<Checkbox> checkbox{};
    switch (os)
    {
    case WIN:
        guiFactory = std::make_unique<WinGuiFactory>();
        break;
    case MAC:
        guiFactory = std::make_unique<MacGuiFactory>();
    default:
        break;
    }

    button = guiFactory->createButton();
    checkbox = guiFactory->createCheckbox();

    button->paint();
    checkbox->paint();
    return 0;
}
