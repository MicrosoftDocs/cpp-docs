STDMETHODIMP CMyControl::MyErrorProneMethod()
{
   BOOL bSucceeded = ErrorProneFunc();
   if (bSucceeded)
      return S_OK;
   else
      // hRes is set to DISP_E_EXCEPTION
      return AtlReportError(GetObjectCLSID(), L"My error message");
}