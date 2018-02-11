//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "Pointers.h"
#include <iostream>

using namespace std;

void Pointers::run() {
    int a = 1;
    int* b = &a;                                            // creating a reference to a
    cout << "Address of a is: " << b << endl;               // print address location (reference)
    cout << "Value at address is: " << *b << endl;          // print address value (dereference)
    a = 3;                                                  // change value
    cout << "Changed value at address is: " << *b << endl;  // print new address value (dereference)
}