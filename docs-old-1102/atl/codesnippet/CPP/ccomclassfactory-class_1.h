class ATL_NO_VTABLE CMyCustomClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyCustomClass, &CLSID_MyCustomClass>,
   public IDispatchImpl<IMyCustomClass, &IID_IMyCustomClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   DECLARE_CLASSFACTORY_EX(CMyClassFactory)

   // Remainder of class declaration omitted.