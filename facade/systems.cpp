#include "systems.h"

string TaxiGateway::init() const {
    return "TaxiGateway: Ready!\n";
}

string TaxiGateway::requestTaxi() const {
    return "TaxiGateway: route request to dispatcher!\n";
}

string TaxiDispatcher::init() const {
    return "TaxiDispatcher: Ready!\n";
}

string TaxiDispatcher::dispatchTaxi() const {
    return "TaxiDispatcher: dispatch taxi to client!\n";
}