//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "Structs.h"
#include <iostream>

using namespace std;

struct Date {
    int day;
    string month;
    int year;
}; // notice the ; !!!

void Structs::run() {
    Date today;

    today.day = 11;
    today.month = "Sunday";
    today.year = 2018;
}