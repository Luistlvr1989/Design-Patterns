#include  "facade.h"

Facade::Facade(TaxiGateway* gateway, TaxiDispatcher* dispatcher) {
    assert(gateway != nullptr);
    assert(dispatcher != nullptr);

    this->gateway = gateway;
    this->dispatcher = dispatcher;
}

Facade::~Facade() {
    delete gateway;
    delete dispatcher;
}

string Facade::start() {
    string result = "Facade initializes subsystems:\n";
    result += this->gateway->init();
    result += this->dispatcher->init();
    return result;
}

string Facade::processTaxiRequest() {
    string result = "Client taxi request arrived:\n";
    result += this->gateway->requestTaxi();
    result += this->dispatcher->dispatchTaxi();
    return result;
}