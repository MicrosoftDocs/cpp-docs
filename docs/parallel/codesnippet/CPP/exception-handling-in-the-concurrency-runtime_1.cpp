// eh-task.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    wcout << L"Running a task..." << endl;
    // Create a task that throws.
    auto t = create_task([]
    {
        throw exception();
    });
    
    // Create a continuation that prints its input value.
    auto continuation = t.then([]
    {
        // We do not expect this task to run because
        // the antecedent task threw.
        wcout << L"In continuation task..." << endl;
    });

    // Wait for the continuation to finish and handle any 
    // error that occurs.
    try
    {
        wcout << L"Waiting for tasks to finish..." << endl;
        continuation.wait();

        // Alternatively, call get() to produce the same result.
        //continuation.get();
    }
    catch (const exception& e)
    {
        wcout << L"Caught exception." << endl;
    }
}
/* Output:
    Running a task...
    Waiting for tasks to finish...
    Caught exception.
*/