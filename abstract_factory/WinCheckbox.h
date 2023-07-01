#ifndef WINCHECKBOX_H
#define WINCHECKBOX_H

#include "Checkbox.h"

class WinCheckbox : public Checkbox{
public:
    WinCheckbox();
    void paint() override;
};

#endif