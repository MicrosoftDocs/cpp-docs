class ATL_NO_VTABLE CMyAggObject :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyAggObject, &CLSID_MyAggObject>,
   public IDispatchImpl<IMyAggObject, &IID_IMyAggObject, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   DECLARE_GET_CONTROLLING_UNKNOWN()
   HRESULT FinalConstruct()
   {
      return CoCreateInstance(CLSID_MyCustomClass, GetControllingUnknown(), 
         CLSCTX_ALL, IID_IUnknown, (void**)&m_pMyCustomClass);
   }

   IMyCustomClass* m_pMyCustomClass;

   // Remainder of class declaration omitted.