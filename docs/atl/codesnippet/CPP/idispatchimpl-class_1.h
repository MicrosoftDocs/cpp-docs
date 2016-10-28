class ATL_NO_VTABLE CBeeper :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CBeeper, &CLSID_Beeper>,
   public IDispatchImpl<IBeeper, &IID_IBeeper, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>