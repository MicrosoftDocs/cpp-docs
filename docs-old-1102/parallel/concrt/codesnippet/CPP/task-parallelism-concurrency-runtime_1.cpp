// lambda-task-lifetime.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>
#include <string>

using namespace concurrency;
using namespace std;

task<wstring> write_to_string()
{
    // Create a shared pointer to a string that is 
    // assigned to and read by multiple tasks.
    // By using a shared pointer, the string outlives
    // the tasks, which can run in the background after
    // this function exits.
    auto s = make_shared<wstring>(L"Value 1");

    return create_task([s] 
    {
        // Print the current value.
        wcout << L"Current value: " << *s << endl;
        // Assign to a new value.
        *s = L"Value 2";

    }).then([s] 
    {
        // Print the current value.
        wcout << L"Current value: " << *s << endl;
        // Assign to a new value and return the string.
        *s = L"Value 3";
        return *s;
    });
}

int wmain()
{
    // Create a chain of tasks that work with a string.
    auto t = write_to_string();

    // Wait for the tasks to finish and print the result.
    wcout << L"Final value: " << t.get() << endl;
}

/* Output:
    Current value: Value 1
    Current value: Value 2
    Final value: Value 3
*/