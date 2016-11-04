class ATL_NO_VTABLE CMySuppErrClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMySuppErrClass, &CLSID_MySuppErrClass>,
   public ISupportErrorInfoImpl<&IID_IMySuppErrClass>,
   public IDispatchImpl<IMySuppErrClass, &IID_IMySuppErrClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>