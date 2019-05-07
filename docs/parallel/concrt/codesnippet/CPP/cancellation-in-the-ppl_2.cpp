// task-basic-cancellation.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <concrt.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

bool do_work()
{
    // Simulate work.
    wcout << L"Performing work..." << endl;
    wait(250);
    return true;
}

int wmain()
{
    cancellation_token_source cts;
    auto token = cts.get_token();

    wcout << L"Creating task..." << endl;

    // Create a task that performs work until it is canceled.
    auto t = create_task([&]
    {
        bool moreToDo = true;
        while (moreToDo)
        {
            // Check for cancellation.
            if (token.is_canceled())
            {
                // TODO: Perform any necessary cleanup here...

                // Cancel the current task.
                cancel_current_task();
            }
            else 
            {
                // Perform work.
                moreToDo = do_work();
            }
        }
    }, token);

    // Wait for one second and then cancel the task.
    wait(1000);

    wcout << L"Canceling task..." << endl;
    cts.cancel();

    // Wait for the task to cancel.
    wcout << L"Waiting for task to complete..." << endl;
    t.wait();

    wcout << L"Done." << endl;
}

/* Sample output:
    Creating task...
    Performing work...
    Performing work...
    Performing work...
    Performing work...
    Canceling task...
    Waiting for task to complete...
    Done.
*/