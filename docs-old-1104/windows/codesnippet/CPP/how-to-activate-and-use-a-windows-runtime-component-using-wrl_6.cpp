    // Get the domain part of the URI.
    HString domainName;
    hr = uri->get_Domain(domainName.GetAddressOf());
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }