class ATL_NO_VTABLE CMyClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyClass, &CLSID_MyClass>,
   public IDispatchImpl<IMyClass, &IID_IMyClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IDispatchImpl<IMyDualInterface, &__uuidof(IMyDualInterface), &LIBID_NVC_ATL_COMLib, /* wMajor = */ 1, /* wMinor = */ 0>
{
public:
   DECLARE_CLASSFACTORY()

   // Remainder of class declaration omitted