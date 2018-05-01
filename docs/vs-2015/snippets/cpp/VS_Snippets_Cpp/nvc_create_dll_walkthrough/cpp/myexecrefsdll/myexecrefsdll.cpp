//<snippet120>
// MyExecRefsDll.cpp
// compile with: /EHsc /link MathFuncsDll.lib

#include <iostream>

#include "MathFuncsDll.h"

using namespace std;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        MathFuncs::MyMathFuncs::Add(a, b) << endl;
    cout << "a - b = " <<
        MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
    cout << "a / b = " <<
        MathFuncs::MyMathFuncs::Divide(a, b) << endl;

    try
    {
        cout << "a / 0 = " <<
            MathFuncs::MyMathFuncs::Divide(a, 0) << endl; 
    }
    catch (const invalid_argument &e) 
    {
        cout << "Caught exception: " << e.what() << endl; 
    }

    return 0;
}
//</snippet120>
