#include <iostream>
#include "factory/client.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Client* client = new Client(TWO_WHEELER); 
    Vehicle * vehicle = client->getVehicle(); 
    vehicle->printVehicle(); 
    
   	return EXIT_SUCCESS;
}