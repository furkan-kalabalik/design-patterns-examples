#ifndef BUTTON_H
#define BUTTON_H

class Button {
public:
    virtual void render() = 0;
    virtual void onClick() = 0;
};

#endif