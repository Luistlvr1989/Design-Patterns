#include <iostream>
#include <vector> 
#include "mock/mocker.h"

using namespace std;

/**
 * Vectors are same as dynamic arrays with the ability to 
 * resize itself automatically when an element is inserted or deleted,
 **/
typedef vector<int> ivector;

void capacity(ivector);
void access(ivector);
void modifiers(ivector);
void print(ivector);
void rprint(ivector);

template <typename T>
void print(vector<T>);

int main(int argc, char const *argv[]) {
    ivector numbers;

	for (int i = 1; i <= 10; i++) {
		int value = mocker.generateRandomInt();
		numbers.push_back(value);
	}

	capacity(numbers);
	print(numbers); 
	rprint(numbers);
	access(numbers);
	modifiers(numbers);
    
   	return EXIT_SUCCESS;
}

void capacity(ivector numbers) {
	cout << "#Capacity" << endl;
	cout << "Size: " << numbers.size() << endl; 
    cout << "Capacity: " << numbers.capacity() << endl; 
    cout << "Max Size: " << numbers.max_size() << endl; 

	numbers.resize(6); 
  
    cout << "Size: " << numbers.size() << endl; 
	cout << "isEmpty? " << (numbers.empty() ? "true" : "false") << endl;

	numbers.shrink_to_fit(); 

	cout << "Shrink: "; 
	print<int>(numbers);

	cout << endl;
}

void access(ivector numbers) {
	cout << "#Access" << endl;
 	cout << "At 4: " << numbers.at(4) << endl; 
    cout << "Front(): " << numbers.front() << endl; 
    cout << "Back(): " << numbers.back() << endl; 
   
    int* pos = numbers.data(); 
    cout << "The first element is " << *pos << endl << endl; 
}

void modifiers(ivector numbers) {
	cout << "#Modifiers" << endl;
    numbers.assign(5, 10); 
  
    cout << "Elements: "; 
	print<int>(numbers);
  
    numbers.push_back(15); 
    cout << "The last element is: " << numbers[numbers.size() - 1]; 
  
    numbers.pop_back(); 
	cout << endl;
  
    cout << "Elements: ";
    print<int>(numbers);
  
    numbers.insert(numbers.begin(), 5); 
    cout << "The first element is: " << numbers[0] << endl; 
  
    numbers.erase(numbers.begin()); 
    cout << "The first element is: " << numbers[0] << endl; 
  
    numbers.emplace(numbers.begin(), 5); 
    cout << "The first element is: " << numbers[0] << endl; 
  
    numbers.emplace_back(20); 
    cout << "The last element is: " << numbers[numbers.size() - 1] << endl; 
  
	cout << "Elements: ";
    print<int>(numbers);
	
    numbers.clear(); 
    cout << "Size: " << numbers.size() << endl; 
}

void print(ivector numbers) {
	cout << "#Normal Print" << endl;
	cout << "iterator" << endl; 

    print<int>(numbers);

	cout << "vector" << endl; 
	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " "; 
	}

	cout << endl << endl;
}

void rprint(ivector numbers) {
	cout << "#Reverse Print" << endl;
	cout << "iterator" << endl; 

    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
		cout << *it << " "; 
	}
	cout << endl;

	cout << "vector" << endl; 
	for (int i = numbers.size() -1; i >= 0; --i) {
		cout << numbers[i] << " "; 
	}

	cout << endl << endl;
}

template <typename T>
void print(vector<T> vec) {
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		cout << *it << " "; 
	}
	cout << endl;
}