//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "ConsoleInput.h"
#include <iostream>

using namespace std;

void simpleInput() {
    cout << "Enter your age: " << endl;

    int age;
    cin >> age;

    cout << "In ten years you will be " << (age + 10) << " years old." << endl;
}

void withLegacyString() {
    const int LENGTH = 40;
    char name[LENGTH];

    cout << "Wat is your full name? " << endl;
    cin.getline(name, LENGTH);
    cout << "Hello " << name << endl;
}

void ConsoleInput::run() {
    simpleInput();
    withLegacyString();
}