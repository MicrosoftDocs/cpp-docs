            HRESULT __stdcall Add(_In_ int a, _In_ int b, _Out_ int* value)
            {
                if (value == nullptr)
                {
                    return E_POINTER;
                }
                int c = a + b;
                if (IsPrime(c))
                {
                    m_events.InvokeAll(c);
                }
                *value = c;
                return S_OK;
            }