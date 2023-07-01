#ifndef WINBUTTON_H
#define WINBUTTON_H

#include "Button.h"

class WinButton : public Button{
public:
    WinButton();
    void paint() override;
};

#endif