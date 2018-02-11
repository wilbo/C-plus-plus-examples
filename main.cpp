#include <iostream>
#include "HelloWorld/HelloWorld.h"
#include "ChangeReference/ChangeReference.h"
#include "NestedArray/NestedArray.h"
#include "CStrings/CStrings.h"
#include "Strings/Strings.h"
#include "ConsoleInput/ConsoleInput.h"
#include "WritingFiles/WritingFiles.h"
#include "Pointers/Pointers.h"

using namespace std;

int main() {
    // Hello World
//    HelloWorld helloWorld;
//    helloWorld.run();
//
//    // Changing a reference
//    ChangeReference changeReference;
//    changeReference.run();
//
//    // Nested array
//    NestedArray nestedArray;
//    nestedArray.run();
//
//    // CStrings
//    CStrings cStrings;
//    cStrings.run();
//
//    // Strings
//    Strings strings;
//    strings.run();
//
//    // ConsoleInput
//    ConsoleInput consoleInput;
//    consoleInput.run();

    // Writing Files
    WritingFiles writingFiles;
    writingFiles.run();

    // Pointers
    Pointers pointers;
    pointers.run();

    return 0;
}