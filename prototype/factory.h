#ifndef FACTORY_H
#define FACTORY_H

#include "trooper.h"

class Factory {
    static Trooper* prototypes[2];

public:
    virtual ~Factory() = default;
    static Trooper* makeTrooper(int);  
};

#endif