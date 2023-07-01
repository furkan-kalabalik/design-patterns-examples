#ifndef MACBUTTON_H
#define MACBUTTON_H

#include "Button.h"

class MacButton : public Button{
public:
    MacButton();
    void paint() override;
};

#endif