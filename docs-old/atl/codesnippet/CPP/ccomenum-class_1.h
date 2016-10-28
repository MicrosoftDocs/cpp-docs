template <class EnumType, class ElementType>
HRESULT CreateEnumerator(IUnknown** ppUnk, ElementType* begin, ElementType* end,
   IUnknown* pUnk, CComEnumFlags flags)
{
   if (ppUnk == NULL)
      return E_POINTER;
   *ppUnk = NULL;

   CComObject<EnumType>* pEnum = NULL;
   HRESULT hr = CComObject<EnumType>::CreateInstance(&pEnum);

   if (FAILED(hr))
      return hr;

   hr = pEnum->Init(begin, end, pUnk, flags);

   if (SUCCEEDED(hr))
      hr = pEnum->QueryInterface(ppUnk);

   if (FAILED(hr))
      delete pEnum;

   return hr;
} // CreateEnumerator