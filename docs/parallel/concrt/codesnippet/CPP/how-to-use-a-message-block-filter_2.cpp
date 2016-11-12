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