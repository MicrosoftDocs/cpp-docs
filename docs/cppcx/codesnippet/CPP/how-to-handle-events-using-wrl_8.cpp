    wprintf_s(L"Starting device enumeration...\n");
    hr = watcher->Start();
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }