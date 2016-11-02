   STDMETHOD(SetObjects)(ULONG nObjects, IUnknown** ppUnk)
   {
      HRESULT hr = E_INVALIDARG;
      if (nObjects == 1)
      {
         CComQIPtr<EnvDTE::Document> pDoc(ppUnk[0]);
         if (pDoc)
            hr = PPGBaseClass::SetObjects(nObjects, ppUnk);
      }
      return hr;
   }