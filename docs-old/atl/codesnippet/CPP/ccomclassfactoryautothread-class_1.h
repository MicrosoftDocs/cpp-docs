class ATL_NO_VTABLE CMyAutoClass :
   public CComObjectRootEx<CComMultiThreadModel>,
   public CComCoClass<CMyAutoClass, &CLSID_MyAutoClass>,
   public IMyAutoClass
{
public:
   DECLARE_CLASSFACTORY_AUTO_THREAD()

   // Remainder of class declaration omitted.