// eh-task-chain.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain()
{
    int n = 1;
    create_task([n]
    {
        wcout << L"In first task. n = ";
        wcout << n << endl;
        
        return n * 2;

    }).then([](int n)
    {
        wcout << L"In second task. n = ";
        wcout << n << endl;

        return n * 2;

    }).then([](int n)
    {
        wcout << L"In third task. n = ";
        wcout << n << endl;

        // This task throws.
        throw exception();
        // Not reached.
        return n * 2;

    }).then([](int n)
    {
        // This continuation is not run because the previous task throws.
        wcout << L"In fourth task. n = ";
        wcout << n << endl;

        return n * 2;

    }).then([](task<int> previousTask)
    {
        // This continuation is run because it is task-based.
        try
        {
            // The call to task::get rethrows the exception.
            wcout << L"In final task. result = ";
            wcout << previousTask.get() << endl;
        }
        catch (const exception&)
        {
            wcout << L"<exception>" << endl;
        }
    }).wait();
}
/* Output:
    In first task. n = 1
    In second task. n = 2
    In third task. n = 4
    In final task. result = <exception>
*/
