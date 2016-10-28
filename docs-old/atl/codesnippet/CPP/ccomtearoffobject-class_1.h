class CBeeper2 :
   public ISupportErrorInfo,
   public CComTearOffObjectBase<CBeeper>
{
public:
   CBeeper2() {}
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
   {
      return (InlineIsEqualGUID(IID_IBeeper, riid)) ? S_OK : S_FALSE;
   }

BEGIN_COM_MAP(CBeeper2)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
};

class ATL_NO_VTABLE CBeeper :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CBeeper, &CLSID_Beeper>,
   public IDispatchImpl<IBeeper, &IID_IBeeper, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CBeeper()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_BEEPER)

DECLARE_NOT_AGGREGATABLE(CBeeper)

BEGIN_COM_MAP(CBeeper)
   COM_INTERFACE_ENTRY(IBeeper)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY_TEAR_OFF(IID_ISupportErrorInfo, CBeeper2)
END_COM_MAP()

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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