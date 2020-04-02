#include <iostream>
#include "decorator/decorator.h"

using namespace std;

#define FILE "input"

int main(int argc, char const *argv[]) {
    string text = "Hello Decorator!";

    DataSource* encoded = new FileDataSource(FILE);
    encoded = new EncryptionDecorator(encoded);
    encoded = new CompressionDecorator(encoded);

    encoded->writeData(text);

    DataSource* plain = new FileDataSource(FILE);

    cout << "* Input:" << endl;
    cout << text << endl;
    cout << "* Encoded:" << endl;
    cout << plain->readData() << endl;
    cout << "* Decoded:" << endl;
    cout << encoded->readData() << endl;
    
    return EXIT_SUCCESS;
}

