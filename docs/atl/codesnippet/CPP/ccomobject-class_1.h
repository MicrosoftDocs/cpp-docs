class ATL_NO_VTABLE CMyCircle :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyCircle, &CLSID_MyCircle>,
   public IDispatchImpl<IMyCircle, &IID_IMyCircle, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CMyCircle()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYCIRCLE)

DECLARE_NOT_AGGREGATABLE(CMyCircle)

BEGIN_COM_MAP(CMyCircle)
   COM_INTERFACE_ENTRY(IMyCircle)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

public:
   STDMETHOD(get_XCenter)(double* pVal);
};