#include <iostream>
#include "StructPractice2_2.h"

using namespace std;
// Initilaize struct.
void initializeStruct(structVector& vector)
{
    vector.sz = 0;
    vector.elem = new double[vector.sz];
    cout << "struct is initialized" << "\n";
    cout << "struct size is: " << vector.sz << "\n";

}