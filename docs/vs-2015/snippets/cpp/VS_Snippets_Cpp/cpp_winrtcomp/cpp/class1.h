#pragma once
//<snippet01>
#include <collection.h>
#include <amp.h>
#include <amp_math.h>
//</snippet01>

namespace WinRT_CPP
{
   
    //<snippet02>
     public delegate void PrimeFoundHandler(int result);    
    //</snippet02>

     public delegate void PrimeFoundHandler2(int result, double progress);
    ref class Test
    {};

    public ref class Class1 sealed
    {
    public:
        Class1();

        //<snippet04>
    public:

        // Synchronous method. 
        Windows::Foundation::Collections::IVector<double>^  ComputeResult(double input);

        // Asynchronous methods
        Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVector<int>^, double>^
            GetPrimesOrdered(int first, int last);
        Windows::Foundation::IAsyncActionWithProgress<double>^ GetPrimesUnordered(int first, int last);

        // Event whose type is a delegate "class"
        event PrimeFoundHandler^ primeFoundEvent;
        //</snippet04>

        //<snippet06>
    private:
        bool is_prime(int n);
        Windows::UI::Core::CoreDispatcher^ m_dispatcher;
        //</snippet06>

        void Test();
    };
}