    // Get the activation factory for the IUriRuntimeClass interface.
    ComPtr<IUriRuntimeClassFactory> uriFactory;
    HRESULT hr = GetActivationFactory(HStringReference(RuntimeClass_Windows_Foundation_Uri).Get(), &uriFactory);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }