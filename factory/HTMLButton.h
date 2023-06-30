#ifndef HTML_BUTTON_H
#define HTML_BUTTON_H

#include "Button.h"

class HTMLButton : public Button{
public:
    HTMLButton();
    void render() override;
    void onClick() override;
};

#endif