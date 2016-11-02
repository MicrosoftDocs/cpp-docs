class ATL_NO_VTABLE CConnect1 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CConnect1, &CLSID_Connect1>,
   public IConnectionPointContainerImpl<CConnect1>,
   public IConnectionPointImpl<CConnect1, &IID_IPropertyNotifySink>,
   public IConnect1
{
public:
   CConnect1()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_CONNECT1)


BEGIN_COM_MAP(CConnect1)
   COM_INTERFACE_ENTRY(IConnect1)
   COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CConnect1)
   CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
END_CONNECTION_POINT_MAP()


   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};