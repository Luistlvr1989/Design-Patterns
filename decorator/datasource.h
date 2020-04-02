#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;  

class DataSource {
public:
    virtual ~DataSource() = default;

    virtual void writeData(string) = 0;
    virtual string readData() = 0;
};

class FileDataSource : public DataSource {
    string name;

public:
    FileDataSource(string);

    void writeData(string);
    string readData();
};

#endif