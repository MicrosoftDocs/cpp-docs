// basic-parallel-transform.cpp
// compile with: /EHsc
#include <ppl.h>
#include <random>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create a large vector that contains random integer data.
    vector<int> values(1250000);
    generate(begin(values), end(values), mt19937(42));

    // Create a vector to hold the results.
    // Depending on your requirements, you can also transform the 
    // vector in-place.
    vector<int> results(values.size());

    // Negate each element in parallel.
    parallel_transform(begin(values), end(values), begin(results), [](int n) {
        return -n;
    });

    // Alternatively, use the negate class to perform the operation.
    parallel_transform(begin(values), end(values), begin(values), negate<int>());
}