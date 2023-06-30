#ifndef WINDOWS_DIALOG_H
#define WINDOWS_DIALOG_H

#include "Dialog.h"

class WindowsDialog : public Dialog{
public:
    WindowsDialog();
    std::unique_ptr<Button> createButton() override;
};

#endif