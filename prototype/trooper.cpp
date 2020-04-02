#include "trooper.h"

Trooper* Cody::clone()  { 
    return new Cody;
} 

void Cody::greet()  { 
    cout << "Hi sir! I'm  Cody" << endl; 
} 

Trooper* Fox::clone()  { 
    return new Fox;
} 

void Fox::greet()  { 
    cout << "Good day sir! I'm  Fox" << endl; 
} 