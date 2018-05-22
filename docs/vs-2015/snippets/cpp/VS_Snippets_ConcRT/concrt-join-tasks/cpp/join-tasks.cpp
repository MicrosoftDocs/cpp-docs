#include <numeric>
#include <vector>
// <snippet1>
// join-tasks.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <array>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Start multiple tasks.
    array<task<void>, 3> tasks = 
    {
        create_task([] { wcout << L"Hello from taskA." << endl; }),
        create_task([] { wcout << L"Hello from taskB." << endl; }),
        create_task([] { wcout << L"Hello from taskC." << endl; })
    };

    auto joinTask = when_all(begin(tasks), end(tasks));

    // Print a message from the joining thread.
    wcout << L"Hello from the joining thread." << endl;

    // Wait for the tasks to finish.
    joinTask.wait();
}

/* Sample output:
    Hello from the joining thread.
    Hello from taskA.
    Hello from taskC.
    Hello from taskB.
*/
// </snippet1>

void b()
{
// <snippet2>
    // Start multiple tasks.
    array<task<int>, 3> tasks =
    {
        create_task([]() -> int { return 88; }),
        create_task([]() -> int { return 42; }),
        create_task([]() -> int { return 99; })
    };

    auto joinTask = when_all(begin(tasks), end(tasks)).then([](vector<int> results)
    {
        wcout << L"The sum is " 
              << accumulate(begin(results), end(results), 0)
              << L'.' << endl;
    });

    // Print a message from the joining thread.
    wcout << L"Hello from the joining thread." << endl;

    // Wait for the tasks to finish.
    joinTask.wait();

    /* Output:
        Hello from the joining thread.
        The sum is 229.
    */
// </snippet2>
}