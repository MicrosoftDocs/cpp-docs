// affinity-partitioner.cpp
// compile with: /EHsc
#include <ppl.h>
#include <array>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create an array and fill it with zeroes.
    array<unsigned char, 8 * 1024> data;
    data.fill(0);

    // Use an affinity partitioner to perform parallel work on data
    // that is likely to remain in cache.
    // We use the same affinitiy partitioner throughout so that the 
    // runtime can schedule work to occur at the same location for each 
    // iteration of the outer loop.

    affinity_partitioner ap;
    for (int i = 0; i < 100000; i++)
    {
        parallel_for_each(begin(data), end(data), [](unsigned char& c)
        {
            c++;
        }, ap);
    }
}