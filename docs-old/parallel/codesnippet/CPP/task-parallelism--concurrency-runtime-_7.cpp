// async-unwrapping.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    auto t = create_task([]()
    {
        wcout << L"Task A" << endl;

        // Create an inner task that runs before any continuation
        // of the outer task.
        return create_task([]()
        {
            wcout << L"Task B" << endl;
        });
    });
  
    // Run and wait for a continuation of the outer task.
    t.then([]()
    {
        wcout << L"Task C" << endl;
    }).wait();
}

/* Output:
    Task A
    Task B
    Task C
*/