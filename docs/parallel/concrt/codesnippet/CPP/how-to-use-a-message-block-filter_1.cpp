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