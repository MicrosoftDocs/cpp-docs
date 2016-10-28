// select-task.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <array>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Start multiple tasks.
    array<task<int>, 3> tasks = {
        create_task([]() -> int { return 88; }),
        create_task([]() -> int { return 42; }),
        create_task([]() -> int { return 99; })
    };

    // Select the first to finish.
    when_any(begin(tasks), end(tasks)).then([](pair<int, size_t> result)
    {
        wcout << "First task to finish returns "
              << result.first
              << L" and has index "
              << result.second
              << L'.' << endl;
    }).wait();
}

/* Sample output:
    First task to finish returns 42 and has index 1.
*/