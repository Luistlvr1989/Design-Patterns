#include  "factory.h"

Widget* LinuxFactory::createButton() {
    return new LinuxButton;
}

Widget* LinuxFactory::createMenu() {
    return new LinuxMenu;
}

Widget* WindowsFactory::createButton() {
    return new WindowsButton;
}
  
Widget* WindowsFactory::createMenu() {
    return new WindowsMenu;
}