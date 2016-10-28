// task-canceled.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    auto t1 = create_task([]() -> int
    {
        // Cancel the task.
        cancel_current_task();
    });

    // Create a continuation that retrieves the value from the previous.
    auto t2 = t1.then([](task<int> t)
    {
        try
        {
            int n = t.get();
            wcout << L"The previous task returned " << n << L'.' << endl;
        }
        catch (const task_canceled& e)
        {
            wcout << L"The previous task was canceled." << endl;
        }
    });

    // Wait for all tasks to complete.
    t2.wait();
}
/* Output:
    The previous task was canceled.
*/