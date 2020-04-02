#include  "decorator.h"

DataSourceDecorator::DataSourceDecorator(DataSource* wrappee) {
    this->wrappee = wrappee;
}

void DataSourceDecorator::writeData(string data) {
    wrappee->writeData(data);
}

string DataSourceDecorator::readData() {
    return wrappee->readData();
}

string EncryptionDecorator::encode(string data) {
    string encrypted = "";
    for (int i = 0; i < data.size(); ++i) {
        encrypted += data[i] + 1;
    }
    return encrypted;
}

string EncryptionDecorator::decode(string data) {
    string decrypted = "";
    for (int i = 0; i < data.size(); ++i) {
        decrypted += data[i] - 1;
    }
    return decrypted;
}

void EncryptionDecorator::writeData(string data) {
    DataSourceDecorator::writeData(encode(data));
}
    
string EncryptionDecorator::readData() {
    return decode(DataSourceDecorator::readData());
}

string CompressionDecorator::compress(string data) {
    return data;
}

string CompressionDecorator::decompress(string data) {
    return data;
}

void CompressionDecorator::writeData(string data) {
    DataSourceDecorator::writeData(compress(data));
}
    
string CompressionDecorator::readData() {
    return decompress(DataSourceDecorator::readData());
}