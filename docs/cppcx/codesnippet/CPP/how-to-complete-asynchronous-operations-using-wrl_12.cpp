    wprintf_s(L"Starting thread...\n");

    // Create a thread that computes prime numbers.
    ComPtr<IAsyncAction> asyncAction;
    hr = threadPool->RunAsync(Callback<IWorkItemHandler>([&threadCompleted](IAsyncAction* asyncAction) -> HRESULT
    {
        // Print a message.
        const unsigned int start = 0;
        const unsigned int end = 100000;
        unsigned int primeCount = 0;
        for (int n = start; n < end; n++)
        {
            if (IsPrime(n))
            {
                primeCount++;
            }
        }

        wprintf_s(L"There are %u prime numbers from %u to %u.\n", primeCount, start, end);

        // Set the completion event and return.
        SetEvent(threadCompleted.Get());
        return S_OK;

    }).Get(), &asyncAction);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }