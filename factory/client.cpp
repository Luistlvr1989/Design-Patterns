#include "client.h"

Client::Client(Vehicles type)  { 
    switch (type) {
        case TWO_WHEELER:
            vehicle = new TwoWheeler(); 
            break;
        
        case FOUR_WHEELER:
            vehicle = new FourWheeler(); 
            break;
        
        default: 
            throw "Type not supported";
            break;
    }
} 
  
Client::~Client()   { 
    if (vehicle) { 
        delete vehicle; 
        vehicle = nullptr; 
    } 
} 

Vehicle* Client::getVehicle() { 
    return vehicle; 
} 