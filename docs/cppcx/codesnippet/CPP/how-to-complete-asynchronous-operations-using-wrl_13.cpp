    // Print a message and wait for the thread to complete.
    wprintf_s(L"Waiting for thread...\n");

    // Wait for the thread to complete.
    WaitForSingleObjectEx(threadCompleted.Get(), INFINITE, FALSE);

    wprintf_s(L"Finished.\n");

    // All smart pointers and RAII objects go out of scope here.