    // Subscribe to the Added event.
    hr = watcher->add_Added(Callback<AddedHandler>([&deviceCount](IDeviceWatcher* watcher, IDeviceInformation*) -> HRESULT
    {
        // Print a message and increment the device count.
        // When we reach 10 devices, stop enumerating devices.
        wprintf_s(L"Added device...\n");
        deviceCount++;
        if (deviceCount == 10)
        {
            return watcher->Stop();
        }
        return S_OK;

    }).Get(), &addedToken);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }

    hr = watcher->add_Stopped(Callback<StoppedHandler>([=, &enumerationCompleted](IDeviceWatcher* watcher, IInspectable*) -> HRESULT
    {
        wprintf_s(L"Device enumeration stopped.\nRemoving event handlers...");

        // Unsubscribe from the events. This is shown for demonstration.
        // The need to remove event handlers depends on the requirements of 
        // your app. For instance, if you only need to handle an event for 
        // a short period of time, you might remove the event handler when you
        // no longer need it. If you handle an event for the duration of the app,
        // you might not need to explicitly remove it.
        HRESULT hr1 = watcher->remove_Added(addedToken);
        HRESULT hr2 = watcher->remove_Stopped(stoppedToken);
        HRESULT hr3 = watcher->remove_EnumerationCompleted(enumCompletedToken);

        // Set the completion event and return.
        SetEvent(enumerationCompleted.Get());

        return FAILED(hr1) ? hr1 : FAILED(hr2) ? hr2 : hr3;

    }).Get(), &stoppedToken);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }

    // Subscribe to the EnumerationCompleted event.
    hr = watcher->add_EnumerationCompleted(Callback<EnumerationCompletedHandler>([](IDeviceWatcher* watcher, IInspectable*) -> HRESULT
    {
        wprintf_s(L"Enumeration completed.\n");

        return watcher->Stop();

    }).Get(), &enumCompletedToken);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }