// cancel-parallel-for.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Call parallel_for in the context of a cancellation token.
    cancellation_token_source cts;
    run_with_cancellation_token([&cts]() 
    {
        // Print values to the console in parallel.
        parallel_for(0, 20, [&cts](int n)
        {
            // For demonstration, cancel the overall operation 
            // when n equals 11.
            if (n == 11)
            {
                cts.cancel();
            }
            // Otherwise, print the value.
            else
            {
                wstringstream ss;
                ss << n << endl;
                wcout << ss.str();
            }
        });
    }, cts.get_token());
}
/* Sample output:
    15
    16
    17
    10
    0
    18
    5
*/