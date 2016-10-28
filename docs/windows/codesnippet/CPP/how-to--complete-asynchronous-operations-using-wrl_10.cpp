    // Get the activation factory for the IThreadPoolStatics interface.
    ComPtr<IThreadPoolStatics> threadPool;
    HRESULT hr = GetActivationFactory(HStringReference(RuntimeClass_Windows_System_Threading_ThreadPool).Get(), &threadPool);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }