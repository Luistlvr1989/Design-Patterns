#ifndef FACADE_H
#define FACADE_H

#include <assert.h>
#include "systems.h"

class Facade {
    TaxiGateway* gateway;
    TaxiDispatcher* dispatcher;
public:
    Facade(TaxiGateway*, TaxiDispatcher*);
    ~Facade();

    string start();  
    string processTaxiRequest();
};

#endif