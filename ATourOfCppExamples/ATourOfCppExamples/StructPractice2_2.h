#pragma once

//declare struct
struct structVector
{
    int sz; // the size of the struct.
    double* elem; // the point to the elem
};
// Initilaize struct.
void initializeStruct(structVector& vector);