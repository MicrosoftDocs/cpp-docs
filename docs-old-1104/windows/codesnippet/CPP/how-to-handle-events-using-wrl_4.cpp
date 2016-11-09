    // Create an event that is set after device enumeration completes. We later use this event to wait for the timer to complete. 
    // This event is for demonstration only in a console app. In most apps, you typically don't wait for async operations to complete.
    Event enumerationCompleted(CreateEventEx(nullptr, nullptr, CREATE_EVENT_MANUAL_RESET, WRITE_OWNER | EVENT_ALL_ACCESS));
    HRESULT hr = enumerationCompleted.IsValid() ? S_OK : HRESULT_FROM_WIN32(GetLastError());
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }