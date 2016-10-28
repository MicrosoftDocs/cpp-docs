            HRESULT __stdcall Add(_In_ int a, _In_ int b, _Out_ int* value)
            {
                if (value == nullptr)
                {
                    return E_POINTER;
                }
                *value = a + b;
                return S_OK;
            }