#include "datasource.h"

FileDataSource::FileDataSource(string name) {
    this->name = name;
}

void FileDataSource::writeData(string data) {
    ofstream file (name);
    assert(file.is_open());
    file << data;
    file.close();
}

string FileDataSource::readData() {
    ifstream file(name);
    assert(file.is_open());

    string line;
    getline(file, line);
    file.close();

    return line;
}