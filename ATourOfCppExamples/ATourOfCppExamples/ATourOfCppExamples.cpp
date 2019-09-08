// ATourOfCppExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// header file declares functions/classes. 
// So this tells the compiler when it is compling a .cpp file what functions/classes are available. 
// Whenever the preprocesser sees include, it copies the contents of the file to the .cpp file. 
// Then, the compiler knows at least the function that this getting-compiled-cpp file is trying to use is defined somewhere. 
// When the getting-compiled-cpp file is compiled and therefore it produces an object file, the object file has a note that it requires a function. 
// The linker here helps to find another object file produced by another cpp file that has a ntoe that it has a definition of the file. 
#include "ConstPractice1_6.h" 

int main()
{
    constPractice(); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
