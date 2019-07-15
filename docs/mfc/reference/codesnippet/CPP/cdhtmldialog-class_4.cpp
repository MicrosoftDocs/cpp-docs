CComPtr<IHTMLInputButtonElement> spBtn1;
CComPtr<IHTMLInputButtonElement> spBtn2;
HRESULT hr = S_OK;

// Use the template overload
hr = GetElementInterface(L"Button1", &spBtn1);

// Use the nontemplate overload
hr = GetElementInterface(L"Button1", IID_IHTMLInputButtonElement,
                         reinterpret_cast<void **>(&spBtn2));