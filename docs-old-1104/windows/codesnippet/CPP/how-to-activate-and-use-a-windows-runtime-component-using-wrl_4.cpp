    // Create a string that represents a URI.
    HString uriHString;
    hr = uriHString.Set(L"http://www.microsoft.com");
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }