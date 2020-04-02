#ifndef CLIENT_H
#define CLIENT_H

#include "factory.h"

class Client { 
    Factory *factory; 

public:
    Client(OS);
    ~Client();

    void draw();
    void displayWindow();
};

#endif