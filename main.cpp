#include <iostream>
#include "singleton/singleton.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Singleton& singleton1 = Singleton::instance(); 
    Singleton& singleton2 = Singleton::instance();

    cout << &singleton1 << std::endl;
	cout << &singleton2 << std::endl;
    
   	return EXIT_SUCCESS;
}