template <class EnumType, class CollType>
HRESULT CreateSTLEnumerator(IUnknown** ppUnk, IUnknown* pUnkForRelease, 
   CollType& collection)
{
   if (ppUnk == NULL)
      return E_POINTER;
   *ppUnk = NULL;

   CComObject<EnumType>* pEnum = NULL;
   HRESULT hr = CComObject<EnumType>::CreateInstance(&pEnum);

   if (FAILED(hr))
      return hr;

   hr = pEnum->Init(pUnkForRelease, collection);

   if (SUCCEEDED(hr))
      hr = pEnum->QueryInterface(ppUnk);

   if (FAILED(hr))
      delete pEnum;

   return hr;
} // CreateSTLEnumerator