#include <iostream>
#include "ConstPractice1_6.h"

using namespace std;

constexpr double testConstExprFunction(double x, int n);

void constPractice()
{
    const int constX = 16;
    constexpr int constexptX = 17;
    int regularX = 18;

    constexpr double test1 = 1.4 * constX;
    cout << "test1: " << test1 << "\n";
    constexpr double test2 = 1.4 * constexptX;
    cout << "test2: " << test2 << "\n";
    // constexpr double test3 = 1.4 * regularX; // expression must have a constant value. 

    double testArgument = 2.0;
    testConstExprFunction(testArgument, regularX);
}

// constexpr function should be 
// (1) simple, (2) no side effect, (3) can only use the information passed to it as arguments. 
// (4) A constexpr function can only call other constexpr functions. 
// 
// Then why do we use a constexpr function? 
// Mostly for performance reason. If an constexpr function requires a lot of calculation, 
// that calculation can be constant at runtime since most of them can happen during the compilation time. 
// const, constexprt and inline serve different purposes. 
// const: a const variable. Preventing corruption at the read-only memory. 
// constexpr: performance imporvement at runtime. 
// inline: decrease function overhead during runtime. The exprsesions are excuted at runtime. 
constexpr double testConstExprFunction(double x, int n)
{
    double res = 1;
    int i = 0;
    while (i < n)
    {
        res *= x;
        ++i;
    }

    // In a constexpr function, you cannot call 
    // cout << "testConstExprFunction result: " << x << "\n"; // constexprt function cannot result in a  constant expression.
    return res;
}