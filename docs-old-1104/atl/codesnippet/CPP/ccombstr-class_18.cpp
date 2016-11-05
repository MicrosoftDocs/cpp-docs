//implementation of IDataObject::GetData()
STDMETHODIMP CMyDataObj::GetData(FORMATETC *pformatetcIn, STGMEDIUM *pmedium)
{
    HRESULT hr = S_OK;
    if (pformatetcIn->cfFormat == CF_TEXT && pformatetcIn->tymed == TYMED_ISTREAM)
    {
        IStream *pStm;
        // Create an IStream from global memory
        hr = CreateStreamOnHGlobal(NULL, TRUE, &pStm);
        if (FAILED(hr))
            return hr;

        // Initialize CComBSTR
        CComBSTR bstrStr = OLESTR("Hello World");

        // Serialize string into stream
        // the length followed by actual string is serialized into stream
        hr = bstrStr.WriteToStream(pStm);

        // Pass the IStream pointer back through STGMEDIUM struct
        pmedium->tymed = TYMED_ISTREAM;
        pmedium->pstm = pStm;
        pmedium->pUnkForRelease = NULL; 
    }

    return hr;
}