STDMETHODIMP CMyControl::put_MyTitle(BSTR newVal)
{
   // the DISPID for MyTitle in this example is 4
   DISPID dispID = 4;

   // make sure we can change the property
   if (FireOnRequestEdit(dispID) == S_FALSE)
      return S_FALSE;

   // store newVal in CComBstr member
   m_bstrMyTitle = newVal;

   // signal that the property has been changed
   FireOnChanged(dispID);

   return S_OK;
}