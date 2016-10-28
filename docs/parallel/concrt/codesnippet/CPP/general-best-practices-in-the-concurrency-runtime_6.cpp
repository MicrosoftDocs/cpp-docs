// global-scheduler.cpp
// compile with: /EHsc
#include <concrt.h>

using namespace concurrency;

static_assert(false, "This example illustrates a non-recommended practice.");

// Create a Scheduler object at global scope.
// BUG: This practice is not recommended because it can cause deadlock.
Scheduler* globalScheduler = Scheduler::Create(SchedulerPolicy(2,
   MinConcurrency, 2, MaxConcurrency, 4));

int wmain() 
{   
}