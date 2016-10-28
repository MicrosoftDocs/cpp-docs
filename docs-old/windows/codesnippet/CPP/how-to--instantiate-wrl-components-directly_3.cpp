// Writes logging messages to the console.
class CConsoleWriter : public RuntimeClass<RuntimeClassFlags<ClassicCom>, ILogger>
{
public:
    // Initializes the CConsoleWriter object.
    // Failure here causes your object to fail construction with the HRESULT you choose.
    HRESULT RuntimeClassInitialize(_In_ PCWSTR category)
    {
        return SHStrDup(category, &m_category);
    }

    STDMETHODIMP Log(_In_ PCWSTR text)
    {
        wprintf_s(L"%s: %s\n", m_category, text);
        return S_OK;
    }

private:
    PWSTR m_category;

    // Make destroyable only through Release.
    ~CConsoleWriter()
    {
        CoTaskMemFree(m_category);
    }
};