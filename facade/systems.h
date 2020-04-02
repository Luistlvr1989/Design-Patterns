#ifndef SYSTEMS_H
#define SYSTEMS_H

#include <iostream>

using namespace std;  

class TaxiGateway {
public:
    string init() const;
    string requestTaxi() const;
};

class TaxiDispatcher {
public:
    string init() const;
    string dispatchTaxi() const;
};

#endif