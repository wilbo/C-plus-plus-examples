//
// Created by Wilbert Schepenaar on 11/02/2018.
//

#include "WritingFiles.h"
#include <iostream>
#include <fstream>

using namespace std;

void WritingFiles::run() {

    // Writing a file
    ofstream outputFile;
    outputFile.open("../WritingFiles/output.txt");
    outputFile << "A string that I want to save to my output file\n";
    outputFile.close();

    // Reading a file
    ifstream inputFile;
    inputFile.open("../WritingFiles/output.txt");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << line << '\n';
        }
        inputFile.close();
    }
}