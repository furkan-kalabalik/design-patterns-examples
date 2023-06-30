#include <iostream>
#include <stdexcept>

#include "Dialog.h"
#include "WindowsDialog.h"
#include "HTMLDialog.h"

typedef enum {
    WINDOWS,
    HTML
} DialogType;

int main(int argc, char const *argv[])
{
    std::unique_ptr<Dialog> some_dialog;
    DialogType dialogType = WINDOWS;

    switch (dialogType)
    {
    case WINDOWS:
        some_dialog = std::make_unique<WindowsDialog>();
        break;
    case HTML:
        some_dialog = std::make_unique<HTMLDialog>();
        break;
    default:
        throw std::runtime_error("Unknown OS");
        break;
    }

    some_dialog->render();
    return 0;
}
