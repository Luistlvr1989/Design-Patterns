#include "singleton.h"

string Singleton::message = ""; 

Singleton& Singleton::instance() {
    static Singleton instance; 
    return instance;
}

void Singleton::saveMessage(string message) {
    Singleton::message = message;
}

string Singleton::getMessage() {
    return Singleton::message;
}