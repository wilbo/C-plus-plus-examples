//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "CStrings.h"
#include <iostream>

using namespace std;

void CStrings::run() {
    char example[] { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0' };
    cout << example << endl;
    char example2[30];
    strcpy(example2, example); // copies a cstring to a char[] and adds '\0'
    cout << example2 << endl;
}

