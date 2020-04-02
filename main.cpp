#include <iostream>
#include <vector>
#include "facade/facade.h"

using namespace std;

void client(Facade *facade) {
    cout << facade->processTaxiRequest();
}

int main(int argc, char const *argv[]) {
    TaxiGateway* gateway = new TaxiGateway;
    TaxiDispatcher* dispatcher = new TaxiDispatcher;
    Facade* facade = new Facade(gateway, dispatcher);

    cout << facade->start();
    client(facade);

    delete facade;
    
    return EXIT_SUCCESS;
}

