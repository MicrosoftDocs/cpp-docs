// <snippet1>
// parallel-transform-vectors.cpp
// compile with: /EHsc
#include <ppl.h>
#include <random>
#include <atomic>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create a large vector that contains random integer data.
    vector<int> values(1250000);
    generate(begin(values), end(values), mt19937(42));

    // Create a second vector that holds the results.
    vector<int> results(values.size());

    //
    // Demonstrate use of parallel_transform together with a unary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), 
        begin(results), [](int n) { 
            return -n;
        });

    // Alternatively, use the negate class:
    parallel_transform(begin(values), end(values), 
        begin(results), negate<int>());

    //
    // Demonstrate use of parallel_transform together with a binary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), [](int n, int m) {
            return n * m;
        });

    // Alternatively, use the multiplies class:
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), multiplies<int>());
}
// </snippet1>

void foo()
{
    // Create a large vector that contains random integer data.
    vector<int> values(1250000);
    generate(begin(values), end(values), mt19937(42));

    // Create a second vector that holds the results.
    vector<int> results(values.size());

    // <snippet2>
    //
    // Demonstrate use of parallel_transform together with a unary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), 
        begin(results), [](int n) { 
            return -n;
        });

    // Alternatively, use the negate class:
    parallel_transform(begin(values), end(values), 
        begin(results), negate<int>());

    //
    // Demonstrate use of parallel_transform together with a binary function.

    // This example uses a lambda expression.
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), [](int n, int m) {
            return n * m;
        });

    // Alternatively, use the multiplies class:
    parallel_transform(begin(values), end(values), begin(results), 
        begin(results), multiplies<int>());
    // </snippet2>
}
