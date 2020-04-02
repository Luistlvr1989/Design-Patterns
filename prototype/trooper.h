#ifndef TROOPER_H
#define TROOPER_H

#include <iostream>

using namespace std;  

class Trooper { 
public: 
    virtual ~Trooper() = default;

    virtual Trooper* clone() = 0; 
    virtual void greet() = 0;
}; 

class Cody : public Trooper {
public:
   Trooper* clone();
   void greet();
};

class Fox : public Trooper {
public:
   Trooper* clone();
   void greet();
};

#endif