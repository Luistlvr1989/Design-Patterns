#ifndef DECORATOR_H
#define DECORATOR_H

#include "datasource.h"

class DataSourceDecorator : public DataSource {
    DataSource* wrappee;

public:
    DataSourceDecorator(DataSource*);

    void writeData(string);
    string readData();
};

class EncryptionDecorator : public DataSourceDecorator {
    string encode(string);
    string decode(string);

public:
    EncryptionDecorator(DataSource* source) : DataSourceDecorator(source) {}
    
    void writeData(string);
    string readData();
};

class CompressionDecorator : public DataSourceDecorator {
    string compress(string);
    string decompress(string);

public:
    CompressionDecorator(DataSource* source) : DataSourceDecorator(source) {}
    
    void writeData(string);
    string readData();
};

#endif