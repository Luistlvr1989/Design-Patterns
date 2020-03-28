#ifndef CLIENT_H
#define CLIENT_H

#include "vehicle.h"

class Client { 
    Vehicle *vehicle; 
public:
    Client(Vehicles);
    ~Client();

    Vehicle* getVehicle();
};

#endif