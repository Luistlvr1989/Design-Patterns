#include <iostream>
#include <vector>
#include "prototype/factory.h"

using namespace std;

void greet(vector<Trooper*>);
void dismiss(vector<Trooper*>);

int main(int argc, char const *argv[]) {
    vector<Trooper*> soldiers;
    int choice;
    
    while (true) {
        cout << "Cody(0) Fox(1) Go(3): ";
        cin >> choice;

        if (choice == 3) {
            break;
        }

        soldiers.push_back(Factory::makeTrooper(choice));
    }

    greet(soldiers);
    dismiss(soldiers);
    
    return EXIT_SUCCESS;
}

void greet(vector<Trooper*> soldiers) {
    for (auto it = soldiers.begin(); it != soldiers.end(); ++it) {
        (*it)->greet();
    }
}

void dismiss(vector<Trooper*> soldiers) {
    for (int i = 0; i < soldiers.size(); ++i) {
        delete soldiers[i];
    }

    soldiers.clear();
}