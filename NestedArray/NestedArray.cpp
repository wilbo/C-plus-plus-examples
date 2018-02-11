//
// Created by Wilbert Schepenaar on 08/02/2018.
//

#include "NestedArray.h"
#include <iostream>

using namespace std;

int** nestedArray(int depth) {
    int** arrayP = new int*[depth];                // an array of pointers

    for (int i = 0; i < depth; i++) {
        int* array = new int[i+1];                  // declare the nested array

        for (int j = 0; j < i+1; j++) {
            array[j] = rand() % 100;                // initialize every value of the nested array with a 0
        }

        arrayP[i] = array;
    }

    return arrayP;
}

void deleteArray(int** arr, int depth) {
    for (int i = 0; i < depth; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
}

void print(int** arr, int depth) {
    for (int i = 0; i < depth; ++i) {
        for (int j = 0; j < i+1; ++j) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
}

void NestedArray::run() {
    int depth = 4;
    int** arrayP = nestedArray(depth);
    print(arrayP, depth);
    deleteArray(arrayP, depth);
}
