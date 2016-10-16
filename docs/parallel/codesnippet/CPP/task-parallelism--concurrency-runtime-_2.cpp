// basic-task.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create a task.
    task<int> t([]()
    {
        return 42;
    });

    // In this example, you don't necessarily need to call wait() because
    // the call to get() also waits for the result.
    t.wait();

    // Print the result.
    wcout << t.get() << endl;
}

/* Output:
    42
*/