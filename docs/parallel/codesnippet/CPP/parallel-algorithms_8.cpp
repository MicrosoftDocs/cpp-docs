// static-partitioner.cpp
// compile with: /EHsc
#include <ppl.h>

using namespace concurrency;

void DoWork(int n)
{
    // TODO: Perform a fixed amount of work...
}

int wmain()
{
    // Use a static partitioner to perform a fixed amount of parallel work.
    parallel_for(0, 100000, [](int n) {
        DoWork(n);
    }, static_partitioner());
}