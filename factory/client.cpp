#include "client.h"

Client::Client(OS os)  { 
    switch (os) {
        case LINUX:
            factory = new LinuxFactory(); 
            break;
        
        case WINDOWS:
            factory = new WindowsFactory(); 
            break;
        
        default: 
            throw "SO not supported";
            break;
    }
} 
  
Client::~Client()   { 
    if (factory) { 
        delete factory; 
        factory = nullptr; 
    } 
} 

void Client::draw() {
    Widget* widget = factory->createButton();
    widget->draw();

    displayWindow();
}

void Client::displayWindow() {
    Widget* widgets[] = {
        factory->createMenu(),
        factory->createButton(),
        factory->createButton()
    };

    widgets[0]->draw();
    widgets[1]->draw();
    widgets[2]->draw();
}