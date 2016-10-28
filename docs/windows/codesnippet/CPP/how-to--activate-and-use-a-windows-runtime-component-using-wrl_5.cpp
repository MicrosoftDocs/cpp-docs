    // Create the IUriRuntimeClass object.
    ComPtr<IUriRuntimeClass> uri;
    hr = uriFactory->CreateUri(uriHString.Get(), &uri);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }