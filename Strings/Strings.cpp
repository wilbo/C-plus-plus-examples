//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "Strings.h"
#include <iostream>
#include <string>

using namespace std;

void Strings::run() {
    string name ;
    name = "Stud";
    name = name + "ent";
    int length = name.length();
    const char* legacy = name.c_str();
    cout << name << ", " << length << ", " << legacy << endl;
}