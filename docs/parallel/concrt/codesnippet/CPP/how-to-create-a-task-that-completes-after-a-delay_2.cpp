// Determines whether the input value is prime.
bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; ++i)
    {
        if ((n % i) == 0)
            return false;
    }
    return true;
}

// Counts the number of primes in the range [0, max_value].
// The operation fails if it exceeds the specified timeout.
bool count_primes(unsigned int max_value, unsigned int timeout)
{
    cancellation_token_source cts;

    // Create a task that computes the count of prime numbers.
    // The task is canceled after the specified timeout.
    auto t = cancel_after_timeout(task<size_t>([max_value, timeout, cts]
    {
        combinable<size_t> counts;
        parallel_for<unsigned int>(0, max_value + 1, [&counts, cts](unsigned int n) 
        {
            // Respond if the overall task is cancelled by canceling 
            // the current task.
            if (cts.get_token().is_canceled())
            {
                cancel_current_task();
            }
            // NOTE: You can replace the calls to is_canceled
            // and cancel_current_task with a call to interruption_point.
            // interruption_point();

            // Increment the local counter if the value is prime.
            if (is_prime(n))
            {
                counts.local()++;
            }
        });
        // Return the sum of counts across all threads.
        return counts.combine(plus<size_t>());
    }, cts.get_token()), cts, timeout);

    // Print the result.
    try
    {
        auto primes = t.get();
        wcout << L"Found " << primes << L" prime numbers within " 
              << timeout << L" ms." << endl;
        return true;
    }
    catch (const task_canceled&)
    {
        wcout << L"The task timed out." << endl;
        return false;
    }
}

int wmain()
{
    // Compute the count of prime numbers in the range [0, 100000] 
    // until the operation fails.
    // Each time the test succeeds, the time limit is halved.

    unsigned int max = 100000;
    unsigned int timeout = 5000;
    
    bool success = true;
    do
    {
        success = count_primes(max, timeout);
        timeout /= 2;
    } while (success);
}
/* Sample output:
    Found 9592 prime numbers within 5000 ms.
    Found 9592 prime numbers within 2500 ms.
    Found 9592 prime numbers within 1250 ms.
    Found 9592 prime numbers within 625 ms.
    The task timed out.
*/