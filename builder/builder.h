#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

class Pizza {
    bool hasCheese;
    bool hasPeperoni;
    bool hasOnions;

    inline string hasToText(bool);

  public:
    class Builder;

    Pizza(bool, bool, bool);

    void print();
};

class Pizza::Builder {
    bool hasCheese = false;
    bool hasPeperoni = false;
    bool hasOnions = false;

public:
    Builder& setCheese(bool);

    Builder& setPeperoni(bool);

    Builder& setOnions(bool);

    Pizza build() const;
};

#endif