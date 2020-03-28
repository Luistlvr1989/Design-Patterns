#include "builder.h"

typedef Pizza::Builder Builder;

Pizza::Pizza(bool hasCheese, bool hasPeperoni, bool hasOnions) { 
    this->hasCheese = hasCheese;
    this->hasPeperoni = hasPeperoni;
    this->hasOnions = hasOnions;
}

void Pizza::print() {
    cout << "Cheese: " << hasToText(hasCheese) << endl;
    cout << "Peperoni: " << hasToText(hasPeperoni) << endl;
    cout << "Onions: " << hasToText(hasOnions) << endl;
}

string Pizza::hasToText(bool hasValue) {
    return hasValue ? "Yes" : "No";
}

Builder& Builder::setCheese(bool hasCheese) {
    this->hasCheese = hasCheese; 
    return *this; 
}

Builder& Builder::setPeperoni(bool hasPeperoni) {
    this->hasPeperoni = hasPeperoni; 
    return *this; 
}

Builder& Builder::setOnions(bool hasOnions) {
    this->hasOnions = hasOnions; 
    return *this; 
}

Pizza Builder::build() const {
    return Pizza { hasCheese, hasPeperoni, hasOnions };
}