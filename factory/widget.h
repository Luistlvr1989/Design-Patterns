#ifndef WIDGET_H
#define WIDGET_H

#include <iostream>

using namespace std;

enum OS { LINUX, WINDOWS };    

class Widget { 
public: 
    virtual ~Widget() = default;

    virtual void draw() = 0; 
}; 

/**
 * Concrete product family 1.
 */
class LinuxButton : public Widget { 
public: 
    void draw();
}; 

class LinuxMenu : public Widget { 
public: 
    void draw();
};

/**
 * Concrete product family 2.
 */
class WindowsButton : public Widget { 
public: 
    void draw();
}; 

class WindowsMenu : public Widget { 
public: 
    void draw();
};

#endif