#include <iostream>

using namespace std;

// this is to create my own array structure.
// The current implementation has the bug with the memory leak.
class YunnyArray
{
    int* m_array{ nullptr }; // universal initializer.
    int m_size{ 0 };

public:
    YunnyArray() = default;
    YunnyArray(int size)
    {
        // how to use 'new' to initialize an array of [type]?
        // stack: type name [elements]; ex: int* test = int intArray[10];
        // heap:  new type [elements]
        m_array = new int[size];
        m_size = size;
    }

    int size() const // const delivers the intention that this class/member function does not modify the class' member variables, but just read.
    {
        return m_size;
    }

    bool isEmpty() const
    {
        return (m_size == 0);
    }
};