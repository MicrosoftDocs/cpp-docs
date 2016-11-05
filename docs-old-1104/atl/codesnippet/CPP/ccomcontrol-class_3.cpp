STDMETHODIMP CMyControl::put_MyText(BSTR newVal)
{
   // store newVal in CComBstr member
   m_bstrMyText = newVal;

   // note the DISPID for the MyText property is 3 in this example
   FireOnChanged(3);

   return S_OK;
}