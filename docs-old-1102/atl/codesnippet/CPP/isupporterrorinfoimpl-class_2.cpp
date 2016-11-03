HRESULT DoPoolOperations(IThreadPoolConfig* pPool, int nSize)
{
    int nCurrSize = 0;
    HRESULT hr = pPool->GetSize(&nCurrSize);
    if (SUCCEEDED(hr))
    {
        printf_s("Current pool size: %d\n", nCurrSize);
        hr = pPool->SetSize(nSize);
        if (SUCCEEDED(hr))
        {
            printf_s("New pool size : %d\n", nSize);
            DWORD dwTimeout = 0;
            hr = pPool->GetTimeout(&dwTimeout);
            if (SUCCEEDED(hr))
            {
                printf_s("Current pool timeout: %u\n", dwTimeout);
                // Increase timeout by 10 seconds.
                dwTimeout += 10 * 1000;
                hr = pPool->SetTimeout(dwTimeout);
                if (SUCCEEDED(hr))
                {
                    printf_s("New pool timeout: %u\n", dwTimeout);
                }
                else
                {
                    printf_s("Failed to set pool timeout: 0x%08X\n", hr);
                }
            }
            else
            {
                printf_s("Failed to get pool timeout: 0x%08X\n", hr);
            }
        }
        else
        {
            printf_s("Failed to resize pool: 0x%08X\n", hr);
        }
    }
    else
    {
        printf_s("Failed to get pool size: 0x%08x\n", hr);
    }

    return hr;
}