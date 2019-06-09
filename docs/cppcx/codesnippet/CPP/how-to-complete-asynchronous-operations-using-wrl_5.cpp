    // Create a timer that prints a message after 2 seconds.

    TimeSpan delay;
    delay.Duration = 20000000; // 2 seconds.

    auto callback = Callback<ITimerElapsedHandler>([&timerCompleted](IThreadPoolTimer* timer) -> HRESULT
    {
        wprintf_s(L"Timer fired.\n");

        TimeSpan delay;
        HRESULT hr = timer->get_Delay(&delay);
        if (SUCCEEDED(hr))
        {
            wprintf_s(L"Timer duration: %2.2f seconds.\n", delay.Duration / 10000000.0);
        }

        // Set the completion event and return.
        SetEvent(timerCompleted.Get());
        return hr;
    });
    hr = callback ? S_OK : E_OUTOFMEMORY;
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }

    ComPtr<IThreadPoolTimer> timer;
    hr = timerFactory->CreateTimer(callback.Get(), delay, &timer);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }