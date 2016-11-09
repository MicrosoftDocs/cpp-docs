    // Print a message and wait for the timer callback to complete.
    wprintf_s(L"Timer started.\nWaiting for timer...\n");

    // Wait for the timer to complete.
    WaitForSingleObjectEx(timerCompleted.Get(), INFINITE, FALSE);
    // All smart pointers and RAII objects go out of scope here.