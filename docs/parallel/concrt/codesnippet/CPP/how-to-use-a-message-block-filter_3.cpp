// primes-filter.cpp
// compile with: /EHsc
#include <agents.h>
#include <algorithm>
#include <iostream>
#include <random>

using namespace concurrency;
using namespace std;

// Determines whether the input value is prime.
bool is_prime(unsigned long n)
{
    if (n < 2)
        return false;
    for (unsigned long i = 2; i < n; ++i)
    {
        if ((n % i) == 0)
            return false;
    }
    return true;
}

// Illustrates usage of a message buffer that does not use filtering.
void count_primes(unsigned long random_seed)
{
    // Holds prime numbers.
    vector<unsigned long> primes;

    // Adds numbers that are prime to the vector object.
    transformer<unsigned long, unsigned long> t([&primes](unsigned long n) -> unsigned long
    {
        if (is_prime(n))
        {
            primes.push_back(n);
        }
        return n;
    });

    // Send random values to the message buffer.
    mt19937 generator(random_seed);
    for (int i = 0; i < 20; ++i)
    {
        send(t, static_cast<unsigned long>(generator()%10000));
    }

    // Receive from the message buffer the same number of times
    // to ensure that the message buffer has processed each message.
    for (int i = 0; i < 20; ++i)
    {
        receive(t);
    }

    // Print the prime numbers to the console.
    wcout << L"The following numbers are prime: " << endl;
    for(unsigned long prime : primes)
    {
        wcout << prime << endl;
    }
}

// Illustrates usage of a message buffer that uses filtering.
void count_primes_filter(unsigned long random_seed)
{
    // Accepts numbers that are prime.
    transformer<unsigned long, unsigned long> t([](unsigned long n) -> unsigned long
    {
        // The filter function guarantees that the input value is prime.
        // Return the input value.
        return n;
    },
    nullptr,
    [](unsigned long n) -> bool
    {
        // Filter only values that are prime.
        return is_prime(n);
    });

    // Send random values to the message buffer.
    mt19937 generator(random_seed);
    size_t prime_count = 0;
    for (int i = 0; i < 20; ++i)
    {
        if (send(t, static_cast<unsigned long>(generator()%10000)))
        {
            ++prime_count;
        }
    }

    // Print the prime numbers to the console. 
    wcout << L"The following numbers are prime: " << endl;
    while (prime_count-- > 0)
    {
        wcout << receive(t) << endl;
    }
}

int wmain()
{
    const unsigned long random_seed = 99714;

    wcout << L"Without filtering:" << endl;
    count_primes(random_seed);

    wcout << L"With filtering:" << endl;
    count_primes_filter(random_seed);

    /* Output:
    9973
    9349
    9241
    8893
    1297
    7127
    8647
    3229
    With filtering:
    The following numbers are prime:
    9973
    9349
    9241
    8893
    1297
    7127
    8647
    3229
    */
}