//
// Created by Wilbert Schepenaar on 08/02/2018.
//

#include "ChangeReference.h"
#include <iostream>

using namespace std;

void change(int *p) {
    *p += 3;                                            // dereference and add 3 to the value the pointer is pointing at
}

void ChangeReference::run() {
    int i = 2;                                          // declare i
    int* iPointer = &i;                                 // create a pointer to the address location of i
    cout << "Changed the value of i from " << i;        // print i
    change(iPointer);
    cout << " to " << i << " by reference." << endl;    // print i
}