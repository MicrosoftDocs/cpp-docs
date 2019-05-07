int wmain()
{
    ComPtr<CConsoleWriter> writer;
    HRESULT hr = MakeAndInitialize<CConsoleWriter>(&writer, L"INFO");
    if (FAILED(hr))
    {
        wprintf_s(L"Object creation failed. Result = 0x%x", hr);
        return hr;
    }
    hr = writer->Log(L"Logger ready.");
    return hr;
}

/* Output:
INFO: Logger ready.
*/