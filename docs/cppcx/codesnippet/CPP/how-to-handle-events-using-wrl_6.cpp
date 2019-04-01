    // Create a IDeviceWatcher object from the factory.
    ComPtr<IDeviceWatcher> watcher;
    hr = watcherFactory->CreateWatcher(&watcher);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }