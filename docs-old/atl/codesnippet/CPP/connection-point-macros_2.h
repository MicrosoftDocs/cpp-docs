class ATL_NO_VTABLE CConnect2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CConnect2, &CLSID_Connect2>,
   public IConnectionPointContainerImpl<CConnect2>,
   public IPropertyNotifySinkCP<CConnect2>
{
public:
   BEGIN_CONNECTION_POINT_MAP(CConnect2)
      CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
   END_CONNECTION_POINT_MAP()

   // Remainder of class declaration omitted.