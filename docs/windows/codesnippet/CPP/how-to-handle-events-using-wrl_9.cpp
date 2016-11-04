    // Wait for the operation to complete.
    WaitForSingleObjectEx(enumerationCompleted.Get(), INFINITE, FALSE);

    wprintf_s(L"Enumerated %u devices.\n", deviceCount);

    // All smart pointers and RAII objects go out of scope here.