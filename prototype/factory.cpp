#include  "factory.h"

Trooper* Factory::prototypes[] = { new Cody, new Fox };

Trooper* Factory::makeTrooper(int type) {
    return prototypes[type]->clone();
}
