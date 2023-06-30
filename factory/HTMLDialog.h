#ifndef HTML_DIALOG_H
#define HTML_DIALOG_H

#include "Dialog.h"
#include <memory>

class HTMLDialog : public Dialog{
public:
    HTMLDialog();
    std::unique_ptr<Button> createButton() override;
};

#endif