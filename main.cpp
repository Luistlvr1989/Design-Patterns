#include <iostream>
#include "factory/client.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Client* client = new Client(LINUX); 
    client->draw(); 
    
   	return EXIT_SUCCESS;
}