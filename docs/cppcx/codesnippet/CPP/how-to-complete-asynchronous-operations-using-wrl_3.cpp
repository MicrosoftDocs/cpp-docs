    // Get the activation factory for the IThreadPoolTimer interface.
    ComPtr<IThreadPoolTimerStatics> timerFactory;
    HRESULT hr = GetActivationFactory(HStringReference(RuntimeClass_Windows_System_Threading_ThreadPoolTimer).Get(), &timerFactory);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }