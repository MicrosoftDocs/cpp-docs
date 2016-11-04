    // Print the domain name and return.
    wprintf_s(L"Domain name: %s\n", domainName.GetRawBuffer(nullptr));

    // All smart pointers and RAII objects go out of scope here.