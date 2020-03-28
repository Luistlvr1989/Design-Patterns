#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

enum Vehicles { TWO_WHEELER, FOUR_WHEELER };

class Vehicle { 
public: 
    virtual ~Vehicle() = default;

    virtual void printVehicle() = 0; 
}; 

class TwoWheeler : public Vehicle { 
public: 
    void printVehicle();
}; 

class FourWheeler : public Vehicle { 
public: 
    void printVehicle();
}; 

#endif