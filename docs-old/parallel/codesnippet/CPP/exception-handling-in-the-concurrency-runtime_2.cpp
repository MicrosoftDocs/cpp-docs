// eh-continuations.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{    
    wcout << L"Running a task..." << endl;
    // Create a task that throws.
    auto t = create_task([]() -> int
    {
        throw exception();
        return 42;
    });

    //
    // Attach two continuations to the task. The first continuation is  
    // value-based; the second is task-based.

    // Value-based continuation.
    auto c1 = t.then([](int n)
    {
        // We don't expect to get here because the antecedent 
        // task always throws.
        wcout << L"Received " << n << L'.' << endl;
    });

    // Task-based continuation.
    auto c2 = t.then([](task<int> previousTask)
    {
        // We do expect to get here because task-based continuations
        // are scheduled even when the antecedent task throws.
        try
        {
            wcout << L"Received " << previousTask.get() << L'.' << endl;
        }
        catch (const exception& e)
        {
            wcout << L"Caught exception from previous task." << endl;
        }
    });

    // Wait for the continuations to finish.
    try
    {
        wcout << L"Waiting for tasks to finish..." << endl;
        (c1 && c2).wait();
    }
    catch (const exception& e)
    {
        wcout << L"Caught exception while waiting for all tasks to finish." << endl;
    }
}
/* Output:
    Running a task...
    Waiting for tasks to finish...
    Caught exception from previous task.
    Caught exception while waiting for all tasks to finish.
*/