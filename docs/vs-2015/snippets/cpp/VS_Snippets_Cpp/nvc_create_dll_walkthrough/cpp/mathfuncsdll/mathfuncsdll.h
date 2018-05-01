//<snippet100>
// MathFuncsDll.h

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif

//</snippet100>
//<snippet101>
namespace MathFuncs
{
    // This class is exported from the MathFuncsDll.dll
    class MyMathFuncs
    {
    public: 
        // Returns a + b
        static MATHFUNCSDLL_API double Add(double a, double b); 

        // Returns a - b
        static MATHFUNCSDLL_API double Subtract(double a, double b); 

        // Returns a * b
        static MATHFUNCSDLL_API double Multiply(double a, double b); 

        // Returns a / b
        // Throws const std::invalid_argument& if b is 0
        static MATHFUNCSDLL_API double Divide(double a, double b); 
    };
}
//</snippet101>
