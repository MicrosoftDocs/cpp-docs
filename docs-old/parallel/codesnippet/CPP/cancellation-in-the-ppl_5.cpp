// task-cancellation-callback.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    cancellation_token_source cts;
    auto token = cts.get_token();

    // An event that is set in the cancellation callback.
    event e;

    cancellation_token_registration cookie;
    cookie = token.register_callback([&e, token, &cookie]()
    {
        wcout << L"In cancellation callback..." << endl;
        e.set();

        // Although not required, demonstrate how to unregister 
        // the callback.
        token.deregister_callback(cookie);
    });

    wcout << L"Creating task..." << endl;

    // Create a task that waits to be canceled.
    auto t = create_task([&e]
    {
        e.wait();
    }, token);

    // Cancel the task.
    wcout << L"Canceling task..." << endl;
    cts.cancel();

    // Wait for the task to cancel.
    t.wait();

    wcout << L"Done." << endl;
}
/* Sample output:
    Creating task...
    Canceling task...
    In cancellation callback...
    Done.
*/