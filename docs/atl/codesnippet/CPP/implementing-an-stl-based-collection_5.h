class ATL_NO_VTABLE CWords :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CWords, &CLSID_Words>,
   // 'CollectionType' replaces 'IWords' in next line
   public IDispatchImpl<CollectionType, &IID_IWords, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
DECLARE_REGISTRY_RESOURCEID(IDR_WORDS)


BEGIN_COM_MAP(CWords)
   COM_INTERFACE_ENTRY(IWords)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// Remainder of class declaration omitted.