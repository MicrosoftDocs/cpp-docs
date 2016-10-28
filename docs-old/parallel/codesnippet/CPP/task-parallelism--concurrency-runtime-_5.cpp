// basic-continuation.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    auto t = create_task([]() -> int
    {
        return 42;
    });

    t.then([](int result)
    {
        wcout << result << endl;
    }).wait();

    // Alternatively, you can chain the tasks directly and
    // eliminate the local variable.
    /*create_task([]() -> int
    {
        return 42;
    }).then([](int result)
    {
        wcout << result << endl;
    }).wait();*/
}

/* Output:
    42
*/