#ifndef FACTORY_H
#define FACTORY_H

#include "widget.h"

class Factory {
public:
    virtual ~Factory() = default;

    virtual Widget* createButton() = 0;
    virtual Widget* createMenu() = 0;
};

class LinuxFactory : public Factory {
public:
    Widget* createButton();
    Widget* createMenu();
};

class WindowsFactory : public Factory {
public:
    Widget* createButton();
    Widget* createMenu();
};

#endif