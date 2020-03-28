#include <iostream>
#include "builder/builder.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Pizza onionAndCheese = Pizza::Builder()
		.setCheese(true)
        .setOnions(true)
		.build();

	onionAndCheese.print();
    
   	return EXIT_SUCCESS;
}