class ATL_NO_VTABLE CMyClass2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyClass2, &CLSID_MyClass>,
   public IDispatchImpl<IMyClass, &IID_IMyClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IDispatchImpl<IMyDualInterface, &__uuidof(IMyDualInterface), &LIBID_NVC_ATL_COMLib, /* wMajor = */ 1, /* wMinor = */ 0>
{
public:
   DECLARE_CLASSFACTORY2(CMyLicense)

   // Remainder of class declaration omitted