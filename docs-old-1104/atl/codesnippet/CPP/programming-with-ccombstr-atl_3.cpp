// The wrong way to do it
BSTR * MyBadFunction()
{
   // Create the CComBSTR object
   CComBSTR bstrString(L"Hello World");
   // Convert the string to uppercase
   HRESULT hr;
   hr = bstrString.ToUpper();

   // Return a pointer to the BSTR. ** Bad thing to do **
   return &bstrString;
}
// The correct way to do it
HRESULT MyGoodFunction(/*[out]*/ BSTR* bstrStringPtr)
{
   // Create the CComBSTR object
   CComBSTR bstrString(L"Hello World");
   // Convert the string to uppercase
   HRESULT hr;
   hr = bstrString.ToUpper();
   if (hr != S_OK)
       return hr;
   // Return a copy of the string.
   return bstrString.CopyTo(bstrStringPtr);
}