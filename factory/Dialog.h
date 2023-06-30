#ifndef DIALOG_H
#define DIALOG_H

#include "Button.h"
#include <memory>

class Dialog {
public:
    virtual std::unique_ptr<Button> createButton() = 0;
    void render();
};

#endif