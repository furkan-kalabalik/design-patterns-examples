#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "Button.h"

class WindowsButton : public Button{
public:
    WindowsButton();
    void render() override;
    void onClick() override;
};

#endif