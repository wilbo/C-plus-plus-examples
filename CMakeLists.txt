cmake_minimum_required(VERSION 3.9)
project(exercises)

set(CMAKE_CXX_STANDARD 11)

add_executable(exercises main.cpp HelloWorld/HelloWorld.cpp HelloWorld/HelloWorld.h ChangeReference/ChangeReference.cpp ChangeReference/ChangeReference.h NestedArray/NestedArray.cpp NestedArray/NestedArray.h CStrings/CStrings.cpp CStrings/CStrings.h Strings/Strings.cpp Strings/Strings.h ConsoleInput/ConsoleInput.cpp ConsoleInput/ConsoleInput.h WritingFiles/WritingFiles.cpp WritingFiles/WritingFiles.h Structs/Structs.cpp Structs/Structs.h Pointers/Pointers.cpp Pointers/Pointers.h)