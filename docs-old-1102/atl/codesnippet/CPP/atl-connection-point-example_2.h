class ATL_NO_VTABLE CConnect2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CConnect2, &CLSID_Connect2>,
   public IConnectionPointContainerImpl<CConnect2>,
   public IPropertyNotifySinkCP<CConnect2>